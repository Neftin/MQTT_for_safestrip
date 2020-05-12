
%  #######################################################
%  #  _______   __  _____ ______ _______ _ ____   _____  #
%  #         \ |  |   ___|   ___|__   __| |    \ |       #
%  #          \|  |  __| |  __|    | |  | |     \|       #
%  #       |\     | |____| |       | |  | |   |\         #
%  #  _____| \____| _____|_|       |_|  |_|___| \______  #
%  #                                                     #
%  #######################################################

% Coded by Giammarco Valenti 16-Mar-2020
% /// KEEP IT SIMPLE! \\\

% Given a YAML file by omnilogger, this script returns a structure for each topic
% appeared, the sctructure is:

% name_number.delays..............delay for each message
% name_number.UTC_logger_time.....time it arrived at the logger
% name_number.UTC_station_time....time stamped from the station
% name_number.UTC_cloud_time......NOT AVAILBLE: for the future to fill it
% with the logger time of the cloud server

clear all;
close all;
clearvars -except LOG the_file

addpath(genpath('..'))

folder_mat = '../data_mat';
mkdir('../data_mat');

% Get a list of all files and folders in this folder.
files = dir('..');
% Get a logical vector that tells which is a directory.
dirFlags = [files.isdir];
% Extract only those that are directories.
subFolders = files(dirFlags);

% folders = ls('..');
% folders = [ folders 'WWD_RDW_NEQ_2020-02-19/2020-02-21' ]; % extra folder

for kkk = 1:length(subFolders)
    
    fld = subFolders(kkk).name;
    
    matfiles = dir(fullfile([ '../' , fld , '/*.yaml']));
    
    disp([ 'in folder ' , subFolders(kkk).name ])

    for fff = 1:length(matfiles)

        filefile = matfiles(fff).name;

        the_file = filefile;

        mat_file_name =  [ folder_mat ,'/', erase(the_file,'.yaml') ];

        if ~isfile([ mat_file_name '.mat' ])

            disp([ 'elaborating file ' , the_file ])

            try
                LOG = yaml.ReadYaml(the_file);
            catch err
                warning([ 'something wrong with the file yaml: ' the_file ])
                break
            end

            %%
            fn    = fieldnames(LOG);
            names = ["noname"];

            % Iterate to get names
            for k=1:numel(fn)
                
                try

                    a = LOG.(fn{k}).topic;
                    a = erase(a,'SafeStrip/');
                    a = replace(a,'/','_');

                    names(end+1) = string(a);
                    
                catch err
                    disp([ 'Error: ' err.identifier ' Ignored... It is for the best believe me.' ]);
                end

            end

            %% names (topics)

            names = unique(names);
            names = names(names ~= "noname");

            % % remove minuses
            % for i = 1:length(names)
            %     % minus must be removed from the names (replace with "9") so it is clearly
            %     % out of Uint32
            %     names(i) = replace(names(i),'-','9');
            % end


            %% constants for decoding

            u64 = (64/8*2);
            u32 = (32/8*2);
            u16 = (16/8*2);
            u8  = (8/8*2);

            %%

            % type_of_messages 1 CAM 2 DENM 3 HMI 4 Strip_CAM 5 MAP

            % span for each name
            for i = 1:length(names)
                % which type_of_message of message?
                if contains(names(i),'Strip_CAM') % check before Strip_CAM since contains CAM word :)
                    type_of_message = 4;
                elseif contains(names(i),'CAM')
                    type_of_message = 1;
                elseif contains(names(i),'DENM')
                    type_of_message = 2;
                elseif contains(names(i),'HMI')
                    type_of_message = 3;
                elseif contains(names(i),'MAPEM')
                    type_of_message = 5;
                elseif contains(names(i),'Host')
                    type_of_message = 6;
                else
                    type_of_message = 0;
                end

                current_name = names(i);

                % initialize 
                cam_count       = 0;
                denm_count      = 0;
                hmi_count       = 0;
                strip_cam_count = 0;
                host_count      = 0;

                % span by message

                for k=1:numel(fn)
                    
                    try

                        a = LOG.(fn{k}).topic;
                        a = erase(a,'SafeStrip/');
                        a = replace(a,'/','_');

                        carico_pagante = LOG.(fn{k}).payload;
                        ptr = 0;

                            if a == current_name

                                % Select right message
                                if type_of_message == 1


                                    cam_count = cam_count + 1;

                                    CAM.utc_logger(cam_count)       = str2double(LOG.(fn{k}).time_stamp_local);

                                    [CAM.utc(cam_count),ptr]        = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [CAM.msgID(cam_count),ptr]      = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [CAM.StationID(cam_count),ptr]  = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [CAM.genDelTime(cam_count),ptr] = TNC( ptr, 'Uint16' ,carico_pagante,1000 );  

                                    [CAM.StType(cam_count),ptr]     = TNC( ptr, 'Uint8'  ,carico_pagante );

                                    [CAM.Lat(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,10^7 );

                                    [CAM.Lon(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,10^7 );

                                    [CAM.CEM(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,100 );

                                    [CAM.CEm(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,100 ); 

                                    [CAM.sMO(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,10 );

                                    [CAM.Alt(cam_count),ptr]        = TNC( ptr, 'int32'  ,carico_pagante,100 ); 

                                    [CAM.Heading(cam_count),ptr]    = TNC( ptr, 'Uint16'  ,carico_pagante,10 );
                                     CAM.Heading(cam_count)         = CAM.Heading(cam_count) + 90; % offset on heading

                                    [CAM.speed(cam_count),ptr]      = TNC( ptr, 'Uint16'  ,carico_pagante,100 );

                                    [CAM.vlength(cam_count),ptr]    = TNC( ptr, 'Uint16'  ,carico_pagante,10 );

                                    [CAM.vwidth(cam_count),ptr]     = TNC( ptr, 'Uint8'  ,carico_pagante,10 );

                                    [CAM.LongAcc(cam_count),ptr]    = TNC( ptr, 'int16'  ,carico_pagante,10 ); 

                                    [CAM.YawRate(cam_count),ptr]    = TNC( ptr, 'int16'  ,carico_pagante,100 );

                                elseif type_of_message == 2

                                    denm_count = denm_count + 1;

                                    DENM.utc_logger(denm_count)        = str2double(LOG.(fn{k}).time_stamp_local);

                                    [DENM.utc(denm_count),ptr]        = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [DENM.stID(denm_count),ptr]       = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [DENM.OstID(denm_count),ptr]      = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [DENM.seqNum(denm_count),ptr]     = TNC( ptr, 'Uint16' ,carico_pagante );

                                    [DENM.Dtime(denm_count),ptr]      = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [DENM.evLat(denm_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante,10^7 );

                                    [DENM.evLon(denm_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante,10^7 );

                                    [DENM.CEM(denm_count),ptr]        = TNC( ptr, 'int32' ,carico_pagante,100 );

                                    [DENM.CEm(denm_count),ptr]        = TNC( ptr, 'int32' ,carico_pagante,100 );

                                    [DENM.sMO(denm_count),ptr]        = TNC( ptr, 'int32' ,carico_pagante,10 );

                                    [DENM.evAlt(denm_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante,100 );

                                    [DENM.revDis(denm_count),ptr]     = TNC( ptr, 'Uint8' ,carico_pagante,100 );

                                    [DENM.revTraDir(denm_count),ptr]  = TNC( ptr, 'Uint8' ,carico_pagante,100 );

                                    [DENM.valDur(denm_count),ptr]     = TNC( ptr, 'int32' ,carico_pagante,1 );

                                    [DENM.stType(denm_count),ptr]     = TNC( ptr, 'Uint8' ,carico_pagante );

                                    [DENM.CauCod(denm_count),ptr]     = TNC( ptr, 'int32' ,carico_pagante );

                                    [DENM.subCC(denm_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante );

                                    [DENM.fricCoef(denm_count),ptr]     = TNC( ptr, 'Uint16' ,carico_pagante,1000 );

                                    [DENM.fricConf(denm_count),ptr]     = TNC( ptr, 'Uint16' ,carico_pagante,1000 );

                                    [DENM.alaLP(denm_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante,1000 );

                                    [DENM.alaDLS(denm_count),ptr]     = TNC( ptr, 'Uint32' ,carico_pagante,1000 );               


                                elseif type_of_message == 3

                                    hmi_count = hmi_count + 1;

                                    HMIin.utc_logger(hmi_count)   = str2double(LOG.(fn{k}).time_stamp_local);

                                    [HMIin.utc(hmi_count),ptr]     = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [HMIin.OuID(hmi_count),ptr]    = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [HMIin.StID(hmi_count),ptr]    = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [HMIin.WL(hmi_count),ptr]      = TNC( ptr, 'Uint8' ,carico_pagante );

                                    [HMIin.j0f(hmi_count),ptr]      = TNC( ptr, 'double' ,carico_pagante );

                                    [HMIin.Tdist(hmi_count),ptr]    = TNC( ptr, 'double' ,carico_pagante );

                                    [HMIin.Tspeed(hmi_count),ptr]   = TNC( ptr, 'double' ,carico_pagante );

                                    [HMIin.Tclass(hmi_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante );

                                    [HMIin.TcomDir(hmi_count),ptr]   = TNC( ptr, 'Uint8' ,carico_pagante );

                                elseif type_of_message == 4

                                    strip_cam_count = strip_cam_count + 1;

                                    SC.utc_logger(strip_cam_count)   = str2double(LOG.(fn{k}).time_stamp_local);

                                    [SC.utc(strip_cam_count),ptr]     = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [SC.StID(strip_cam_count),ptr]    = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [SC.SrID(strip_cam_count),ptr]    = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [ST.rfid(strip_cam_count),ptr]      = TNC( ptr, 'Uint32' ,carico_pagante );

                                    [ST.ST(strip_cam_count),ptr]      = TNC( ptr, 'Uint8' ,carico_pagante );

                                    [SC.Lat(strip_cam_count),ptr]      = TNC( ptr, 'int32' ,carico_pagante , 10000000 );

                                    [SC.Lon(strip_cam_count),ptr]    = TNC( ptr, 'int32' ,carico_pagante , 10000000);

                                    [SC.ellM(strip_cam_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante , 100);

                                    [SC.ellm(strip_cam_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante , 100);

                                    [SC.ellO(strip_cam_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante , 100 );

                                    [SC.alt(strip_cam_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante , 10);

                                    [SC.Hea(strip_cam_count),ptr]   = TNC( ptr, 'Uint16' ,carico_pagante ,10 );
                                        SC.Hea(cam_count)           = SC.Hea(cam_count) + 90; % offset on heading

                                    [SC.Speed(strip_cam_count),ptr]   = TNC( ptr, 'Uint16' ,carico_pagante ,100);

                                    [SC.VL(strip_cam_count),ptr]   = TNC( ptr, 'Uint16' ,carico_pagante ,100);

                                    [SC.VW(strip_cam_count),ptr]   = TNC( ptr, 'Uint8' ,carico_pagante ,10 );

                                    [SC.acc(strip_cam_count),ptr]   = TNC( ptr, 'int32' ,carico_pagante ,10 );

                                    [SC.laneID(strip_cam_count),ptr]   = TNC( ptr, 'Uint8' ,carico_pagante ,10);

                                elseif type_of_message == 6

                                    host_count = host_count + 1;

                                    HOST.utc_logger(host_count)        = str2double(LOG.(fn{k}).time_stamp_local);

                                    [HOST.utc(host_count)       , ptr ] = TNC( ptr, 'Uint64' ,carico_pagante );

                                    [HOST.speed(host_count)     , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.LongAcc(host_count)   , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.LatAcc(host_count)    , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.YawRate(host_count)   , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.SteerW(host_count)    , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.SteerWRate(host_count), ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.BrakeP(host_count)    , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.GasPedal(host_count)  , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                    [HOST.BrakeSw(host_count)   , ptr ] = TNC( ptr, 'Uint8' ,carico_pagante );

                                    [HOST.VehType(host_count)   , ptr ] = TNC( ptr, 'int32' ,carico_pagante );

                                    [HOST.VBLP(host_count)      , ptr ] = TNC( ptr, 'double' ,carico_pagante );

                                else

                                    disp(['unmanaged type_of_message for topic: ' a ])

                                end

                            end
                            
                    catch err
                        %disp([ 'Error: ' err.identifier ' Ignored... It is for the best believe me.' ]);
                    end

                end

                % remove minus substituting with 9
                current_name = replace(names(i),'-','9');

                % The structure associated with the topic is filled witht he
                % right structure decoded
                switch(type_of_message)

                    case(1)
                        eval(strcat(current_name,' = CAM;') )
                        clear CAM;
                    case(2)
                        eval(strcat(current_name,' = DENM;') )
                        clear DENM;
                    case(3)
                        eval(strcat(current_name,' = HMIin;') )
                        clear HMIin;
                    case(4)
                        eval(strcat(current_name,' = SC;') )
                        clear SC;
                    case(6)
                        eval(strcat(current_name,' = HOST;') )
                        clear HOST;
                    otherwise
                        disp('not assigned')
                end 

            end
            
            for i=1:length(names)
                veronome = replace(names(i),'-','9');
                if exist(veronome)
                    if isfile([ mat_file_name '.mat'])
                        save(mat_file_name,veronome,'-append');
                        disp(['saved: ' char(veronome) ]);
                    else
                        save(mat_file_name,veronome)
                        disp(['saved: ' char(veronome) ]);
                    end
                end
            end

        else
            disp([ 'skipped ' the_file ])
        end

    end
    
end

% functions


function [ value , p_out ] = TNC(p,string_type_of_message,payload,gain)
    
    u64 = (64/8*2);
    u32 = (32/8*2);
    u16 = (16/8*2);
    u8  = (8/8*2);
    
    switch string_type_of_message
        case 'Uint64'
            iter  = [(p+1):(p+u64) ];
            value = hex2dec(payload(iter));
        case 'Uint32'
            iter  = [(p+1):(p+u32) ];
            value = hex2dec(payload(iter));
        case 'Uint16'
            iter  = [(p+1):(p+u16) ];
            value = hex2dec(payload(iter));
        case 'Uint8'
            iter  = [(p+1):(p+u8) ];
            value = hex2dec(payload(iter));
        case 'int64'
            iter  = [(p+1):(p+u64) ];
            value = nhex2dec(payload(iter),64);
        case 'int32'
            iter  = [(p+1):(p+u32) ];
            value = nhex2dec(payload(iter),32);
        case 'int16'
            iter  = [(p+1):(p+u16) ];
            value = nhex2dec(payload(iter),16);
        case 'int8'
            iter  = [(p+1):(p+u8) ];
            value = nhex2dec(payload(iter),8);
        case 'double'
            iter  = [(p+1):(p+u64) ];
            value = hex2num(payload(iter));
        otherwise
            error([string_type_of_message ': is not a RECOGNIZED TYPE'])
    end
    if(nargin==4)
        value = value/gain;
    end
    p_out = iter(end);

end


