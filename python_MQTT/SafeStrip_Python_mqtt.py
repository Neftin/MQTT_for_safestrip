

#
# Automatically generated
# This code was generated:
# 26/08/2020 18:26
#

import struct

# DECODING KEYS (for general purpose)

HostVehicle_DK = '!QddddddddBid'
    # size of the serialized version of struct HostVehicle
    # HostVehicle size  85
    # HostVehicle n fields 12

CAM_message_DK = '!QIIHBiiiiiiHHHBhhBhhHB'
    # size of the serialized version of struct CAM_message
    # CAM_message size  62
    # CAM_message n fields 22

DENM_message_DK = '!QIIHQiiiiiiBBiBiiHHiI'
    # size of the serialized version of struct DENM_message
    # DENM_message size  77
    # DENM_message n fields 21

Strip_CAM_DK = '!QIIIBiiiiiiHHHBiB'
    # size of the serialized version of struct Strip_CAM
    # Strip_CAM size  57
    # Strip_CAM n fields 17

MAPEM_message_DK = '!QIIBIiiiiBiBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB'
    # size of the serialized version of struct MAPEM_message
    # MAPEM_message size  243242
    # MAPEM_message n fields 21

HMI_activations_DK = '!II'
    # size of the serialized version of struct HMI_activations
    # HMI_activations size  8
    # HMI_activations n fields 2

HMIinputsByApp_active_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp_active
    # HMIinputsByApp_active size  46
    # HMIinputsByApp_active n fields 9

HMIinputsByApp_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp
    # HMIinputsByApp size  46
    # HMIinputsByApp n fields 9

FirstTrajectoryMotorPrimitivesParameters_DK = '!Qidddddddddddddddddddddd'
    # size of the serialized version of struct FirstTrajectoryMotorPrimitivesParameters
    # FirstTrajectoryMotorPrimitivesParameters size  188
    # FirstTrajectoryMotorPrimitivesParameters n fields 24

ManouevreTypes_DK = '!QiBBBB'
    # size of the serialized version of struct ManouevreTypes
    # ManouevreTypes size  16
    # ManouevreTypes n fields 6

StrainGauge_DK = '!QIiddd'
    # size of the serialized version of struct StrainGauge
    # StrainGauge size  40
    # StrainGauge n fields 6

AutomationLevel_DK = '!QB'
    # size of the serialized version of struct AutomationLevel
    # AutomationLevel size  9
    # AutomationLevel n fields 2

ParkingStatus_DK = '!QiIIIIIIIIIII'
    # size of the serialized version of struct ParkingStatus
    # ParkingStatus size  416
    # ParkingStatus n fields 4

ParkingEvent_DK = '!QiIIIB'
    # size of the serialized version of struct ParkingEvent
    # ParkingEvent size  25
    # ParkingEvent n fields 6

ParkingOutput_DK = '!QiIII'
    # size of the serialized version of struct ParkingOutput
    # ParkingOutput size  24
    # ParkingOutput n fields 5

VirtualToll_input_DK = '!QBiiiIII'
    # size of the serialized version of struct VirtualToll_input
    # VirtualToll_input size  33
    # VirtualToll_input n fields 8

VirtualToll_output_DK = '!QIiIB'
    # size of the serialized version of struct VirtualToll_output
    # VirtualToll_output size  21
    # VirtualToll_output n fields 5

EnvironmentData_DK = '!IIIBBiBIIBBBB'
    # size of the serialized version of struct EnvironmentData
    # EnvironmentData size  31
    # EnvironmentData n fields 13

SetCodriverParameters_DK = '!Qdddddd'
    # size of the serialized version of struct SetCodriverParameters
    # SetCodriverParameters size  56
    # SetCodriverParameters n fields 7


# DECODING

def HostVehicle_decode( payload ):
    # decode HostVehicle from packed binary data to python dictonary
    HostVehicle_DK = '!QddddddddBid'
    # size of the serialized version of struct HostVehicle
    # HostVehicle size  85
    # HostVehicle n fields 12

    msg = struct.unpack( HostVehicle_DK , payload )
    return { '_message_type_' : 'HostVehicle' , 'UTC_time' : msg[0] , 'Speed_vehicle_network' : msg[1] , 'LongAcc_vehicle_network' : msg[2] , 'LatAcc_vehicle_network' : msg[3] , 'YawRate_vehicle_network' : msg[4] , 'SteerWheel_vehicle_network' : msg[5] , 'SteerWheelSpeed_vehicle_network' : msg[6] , 'BrakePressure_vehicle_network' : msg[7] , 'GasPedPos_vehicle_network' : msg[8] , 'BrakePedalSwitch_vehicle_network' : msg[9] , 'VehicleType' : msg[10] , 'VehicleBarLongPos' : msg[11] }  


 
def CAM_message_decode( payload ):
    # decode CAM_message from packed binary data to python dictonary
    CAM_message_DK = '!QIIHBiiiiiiHHHBhhBhhHB'
    # size of the serialized version of struct CAM_message
    # CAM_message size  62
    # CAM_message n fields 22

    msg = struct.unpack( CAM_message_DK , payload )
    return { '_message_type_' : 'CAM_message' , 'UTC_time' : msg[0] , 'v2x_cam_header_msgID' : msg[1] , 'v2x_cam_header_originationStationID' : msg[2] , 'v2x_cam_GenerationDeltaTime' : msg[3] , 'v2x_cam_StationType' : msg[4] , 'v2x_cam_Latitude' : msg[5] , 'v2x_cam_Longitude' : msg[6] , 'v2x_cam_ConfidenceEllipse_semiMajor' : msg[7] , 'v2x_cam_ConfidenceEllipse_semiMinor' : msg[8] , 'v2x_cam_ConfidenceEllipse_semiMajorOrientation' : msg[9] , 'v2x_cam_Altitude' : msg[10] , 'v2x_cam_Heading' : msg[11] , 'v2x_cam_Speed' : msg[12] , 'v2x_cam_VehicleLength' : msg[13] , 'v2x_cam_VehicleWidth' : msg[14] , 'v2x_cam_LongitudinalAcceleration' : msg[15] , 'v2x_cam_YawRate' : msg[16] , 'v2x_cam_AccelerationControl' : msg[17] , 'v2x_cam_SteeringWheelAngle' : msg[18] , 'v2x_cam_LateralAcceleration' : msg[19] , 'v2x_cam_VehicleRole' : msg[20] , 'v2x_cam_ExteriorLights_status' : msg[21] }  


 
def DENM_message_decode( payload ):
    # decode DENM_message from packed binary data to python dictonary
    DENM_message_DK = '!QIIHQiiiiiiBBiBiiHHiI'
    # size of the serialized version of struct DENM_message
    # DENM_message size  77
    # DENM_message n fields 21

    msg = struct.unpack( DENM_message_DK , payload )
    return { '_message_type_' : 'DENM_message' , 'UTC_time' : msg[0] , 'v2x_header_StationID' : msg[1] , 'v2x_header_originationStationID' : msg[2] , 'v2x_denm_sequenceNumber' : msg[3] , 'v2x_denm_detectionTime' : msg[4] , 'v2x_denm_eventPosition_latitude' : msg[5] , 'v2x_denm_eventPosition_longitude' : msg[6] , 'v2x_denm_ConfidenceEllipse_semiMajor' : msg[7] , 'v2x_denm_ConfidenceEllipse_semiMinor' : msg[8] , 'v2x_denm_ConfidenceEllipse_semiMajorOrientation' : msg[9] , 'v2x_denm_eventPosition_altitude' : msg[10] , 'v2x_denm_relevanceDistance' : msg[11] , 'v2x_denm_relevanceTrafficDirection' : msg[12] , 'v2x_denm_validityDuration' : msg[13] , 'v2x_denm_stationType' : msg[14] , 'v2x_denm_eventType_CauseCode' : msg[15] , 'v2x_denm_eventType_SubCauseCode' : msg[16] , 'v2x_denm_frictionCoefficient_value' : msg[17] , 'v2x_denm_frictionCoefficient_confidence' : msg[18] , 'v2x_denm_alacarte_LanePosition' : msg[19] , 'v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus' : msg[20] }  


 
def Strip_CAM_decode( payload ):
    # decode Strip_CAM from packed binary data to python dictonary
    Strip_CAM_DK = '!QIIIBiiiiiiHHHBiB'
    # size of the serialized version of struct Strip_CAM
    # Strip_CAM size  57
    # Strip_CAM n fields 17

    msg = struct.unpack( Strip_CAM_DK , payload )
    return { '_message_type_' : 'Strip_CAM' , 'UTC_time' : msg[0] , 'originationStationID' : msg[1] , 'StripID' : msg[2] , 'RFID_ID' : msg[3] , 'StationType' : msg[4] , 'Latitude' : msg[5] , 'Longitude' : msg[6] , 'ConfidenceEllipse_semiMajor' : msg[7] , 'ConfidenceEllipse_semiMinor' : msg[8] , 'ConfidenceEllipse_semiMajorOrientation' : msg[9] , 'Altitude' : msg[10] , 'Heading' : msg[11] , 'Speed' : msg[12] , 'VehicleLength' : msg[13] , 'VehicleWidth' : msg[14] , 'LongitudinalAcceleration' : msg[15] , 'Lane_ID' : msg[16] }  


 
def MAPEM_message_decode( payload ):
    # decode MAPEM_message from packed binary data to python dictonary
    MAPEM_message_DK = '!QIIBIiiiiBiBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB'
    # size of the serialized version of struct MAPEM_message
    # MAPEM_message size  243242
    # MAPEM_message n fields 21

    msg = struct.unpack( MAPEM_message_DK , payload )
    return { '_message_type_' : 'MAPEM_message' , 'UTC_time' : msg[0] , 'v2x_header_msgID' : msg[1] , 'v2x_header_originationStationID' : msg[2] , 'v2x_map_intersection_name' : msg[3] , 'v2x_map_intersection_id' : msg[4] , 'v2x_map_intersection_refLatitude' : msg[5] , 'v2x_map_intersection_refLongitude' : msg[6] , 'v2x_map_intersection_refAltitude' : msg[7] , 'v2x_map_intersection_laneWidth' : msg[8] , 'v2x_map_intersection_speedLimitType' : msg[9] , 'v2x_map_intersection_speedLimitValue' : msg[10] , 'v2x_map_intersection_LaneSet_ID' :  [ msg[11] , msg[12] , msg[13] , msg[14] , msg[15] , msg[16] , msg[17] , msg[18] , msg[19] , msg[20] , msg[21] , msg[22] , msg[23] , msg[24] , msg[25] , msg[26] ]  , 'v2x_map_intersection_LaneSet_approach_ID' :  [ msg[27] , msg[28] , msg[29] , msg[30] , msg[31] , msg[32] , msg[33] , msg[34] , msg[35] , msg[36] , msg[37] , msg[38] , msg[39] , msg[40] , msg[41] , msg[42] ]  , 'v2x_map_intersection_LaneSet_laneAttributes_directionalUse' :  [ msg[43] , msg[44] , msg[45] , msg[46] , msg[47] , msg[48] , msg[49] , msg[50] , msg[51] , msg[52] , msg[53] , msg[54] , msg[55] , msg[56] , msg[57] , msg[58] ]  , 'v2x_map_intersection_LaneSet_nodeList_Xoffset' :  [ msg[59] , msg[60] , msg[61] , msg[62] , msg[63] , msg[64] , msg[65] , msg[66] , msg[67] , msg[68] , msg[69] , msg[70] , msg[71] , msg[72] , msg[73] , msg[74] , msg[75] , msg[76] , msg[77] , msg[78] , msg[79] , msg[80] , msg[81] , msg[82] , msg[83] , msg[84] , msg[85] , msg[86] , msg[87] , msg[88] , msg[89] , msg[90] , msg[91] , msg[92] , msg[93] , msg[94] , msg[95] , msg[96] , msg[97] , msg[98] , msg[99] , msg[100] , msg[101] , msg[102] , msg[103] , msg[104] , msg[105] , msg[106] , msg[107] , msg[108] , msg[109] , msg[110] , msg[111] , msg[112] , msg[113] , msg[114] , msg[115] , msg[116] , msg[117] , msg[118] , msg[119] , msg[120] , msg[121] , msg[122] , msg[123] , msg[124] , msg[125] , msg[126] , msg[127] , msg[128] , msg[129] , msg[130] , msg[131] , msg[132] , msg[133] , msg[134] , msg[135] , msg[136] , msg[137] , msg[138] , msg[139] , msg[140] , msg[141] , msg[142] , msg[143] , msg[144] , msg[145] , msg[146] , msg[147] , msg[148] , msg[149] , msg[150] , msg[151] , msg[152] , msg[153] , msg[154] , msg[155] , msg[156] , msg[157] , msg[158] , msg[159] , msg[160] , msg[161] , msg[162] , msg[163] , msg[164] , msg[165] , msg[166] , msg[167] , msg[168] , msg[169] , msg[170] , msg[171] , msg[172] , msg[173] , msg[174] , msg[175] , msg[176] , msg[177] , msg[178] , msg[179] , msg[180] , msg[181] , msg[182] , msg[183] , msg[184] , msg[185] , msg[186] , msg[187] , msg[188] , msg[189] , msg[190] , msg[191] , msg[192] , msg[193] , msg[194] , msg[195] , msg[196] , msg[197] , msg[198] , msg[199] , msg[200] , msg[201] , msg[202] , msg[203] , msg[204] , msg[205] , msg[206] , msg[207] , msg[208] , msg[209] , msg[210] , msg[211] , msg[212] , msg[213] , msg[214] , msg[215] , msg[216] , msg[217] , msg[218] ]  , 'v2x_map_intersection_LaneSet_nodeList_Yoffset' :  [ msg[219] , msg[220] , msg[221] , msg[222] , msg[223] , msg[224] , msg[225] , msg[226] , msg[227] , msg[228] , msg[229] , msg[230] , msg[231] , msg[232] , msg[233] , msg[234] , msg[235] , msg[236] , msg[237] , msg[238] , msg[239] , msg[240] , msg[241] , msg[242] , msg[243] , msg[244] , msg[245] , msg[246] , msg[247] , msg[248] , msg[249] , msg[250] , msg[251] , msg[252] , msg[253] , msg[254] , msg[255] , msg[256] , msg[257] , msg[258] , msg[259] , msg[260] , msg[261] , msg[262] , msg[263] , msg[264] , msg[265] , msg[266] , msg[267] , msg[268] , msg[269] , msg[270] , msg[271] , msg[272] , msg[273] , msg[274] , msg[275] , msg[276] , msg[277] , msg[278] , msg[279] , msg[280] , msg[281] , msg[282] , msg[283] , msg[284] , msg[285] , msg[286] , msg[287] , msg[288] , msg[289] , msg[290] , msg[291] , msg[292] , msg[293] , msg[294] , msg[295] , msg[296] , msg[297] , msg[298] , msg[299] , msg[300] , msg[301] , msg[302] , msg[303] , msg[304] , msg[305] , msg[306] , msg[307] , msg[308] , msg[309] , msg[310] , msg[311] , msg[312] , msg[313] , msg[314] , msg[315] , msg[316] , msg[317] , msg[318] , msg[319] , msg[320] , msg[321] , msg[322] , msg[323] , msg[324] , msg[325] , msg[326] , msg[327] , msg[328] , msg[329] , msg[330] , msg[331] , msg[332] , msg[333] , msg[334] , msg[335] , msg[336] , msg[337] , msg[338] , msg[339] , msg[340] , msg[341] , msg[342] , msg[343] , msg[344] , msg[345] , msg[346] , msg[347] , msg[348] , msg[349] , msg[350] , msg[351] , msg[352] , msg[353] , msg[354] , msg[355] , msg[356] , msg[357] , msg[358] , msg[359] , msg[360] , msg[361] , msg[362] , msg[363] , msg[364] , msg[365] , msg[366] , msg[367] , msg[368] , msg[369] , msg[370] , msg[371] , msg[372] , msg[373] , msg[374] , msg[375] , msg[376] , msg[377] , msg[378] ]  , 'v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue' :  [ msg[379] , msg[380] , msg[381] , msg[382] , msg[383] , msg[384] , msg[385] , msg[386] , msg[387] , msg[388] , msg[389] , msg[390] , msg[391] , msg[392] , msg[393] , msg[394] ]  , 'v2x_map_intersection_LaneType_ID' :  [ msg[395] , msg[396] , msg[397] , msg[398] , msg[399] , msg[400] , msg[401] , msg[402] , msg[403] , msg[404] , msg[405] , msg[406] , msg[407] , msg[408] , msg[409] , msg[410] ]  , 'v2x_map_intersection_ConnectingLane_allowedManeuvers' :  [ msg[411] , msg[412] , msg[413] , msg[414] , msg[415] , msg[416] , msg[417] , msg[418] , msg[419] , msg[420] , msg[421] , msg[422] , msg[423] , msg[424] , msg[425] , msg[426] , msg[427] , msg[428] , msg[429] , msg[430] , msg[431] , msg[432] , msg[433] , msg[434] , msg[435] , msg[436] , msg[437] , msg[438] , msg[439] , msg[440] , msg[441] , msg[442] , msg[443] , msg[444] , msg[445] , msg[446] , msg[447] , msg[448] , msg[449] , msg[450] , msg[451] , msg[452] , msg[453] , msg[454] , msg[455] , msg[456] , msg[457] , msg[458] , msg[459] , msg[460] , msg[461] , msg[462] , msg[463] , msg[464] , msg[465] , msg[466] , msg[467] , msg[468] , msg[469] , msg[470] , msg[471] , msg[472] , msg[473] , msg[474] , msg[475] , msg[476] , msg[477] , msg[478] , msg[479] , msg[480] , msg[481] , msg[482] , msg[483] , msg[484] , msg[485] , msg[486] , msg[487] , msg[488] , msg[489] , msg[490] , msg[491] , msg[492] , msg[493] , msg[494] , msg[495] , msg[496] , msg[497] , msg[498] , msg[499] , msg[500] , msg[501] , msg[502] , msg[503] , msg[504] , msg[505] , msg[506] ]  , 'v2x_map_intersection_LaneSet_connectingLaneID' :  [ msg[507] , msg[508] , msg[509] , msg[510] , msg[511] , msg[512] , msg[513] , msg[514] , msg[515] , msg[516] , msg[517] , msg[518] , msg[519] , msg[520] , msg[521] , msg[522] , msg[523] , msg[524] , msg[525] , msg[526] , msg[527] , msg[528] , msg[529] , msg[530] , msg[531] , msg[532] , msg[533] , msg[534] , msg[535] , msg[536] , msg[537] , msg[538] , msg[539] , msg[540] , msg[541] , msg[542] , msg[543] , msg[544] , msg[545] , msg[546] , msg[547] , msg[548] , msg[549] , msg[550] , msg[551] , msg[552] , msg[553] , msg[554] , msg[555] , msg[556] , msg[557] , msg[558] , msg[559] , msg[560] , msg[561] , msg[562] , msg[563] , msg[564] , msg[565] , msg[566] , msg[567] , msg[568] , msg[569] , msg[570] , msg[571] , msg[572] , msg[573] , msg[574] , msg[575] , msg[576] , msg[577] , msg[578] , msg[579] , msg[580] , msg[581] , msg[582] , msg[583] , msg[584] , msg[585] , msg[586] , msg[587] , msg[588] , msg[589] , msg[590] , msg[591] , msg[592] , msg[593] , msg[594] , msg[595] , msg[596] , msg[597] , msg[598] , msg[599] , msg[600] , msg[601] , msg[602] ]  , 'v2x_map_intersection_LaneSet_connectingLaneSignalGroup' :  [ msg[603] , msg[604] , msg[605] , msg[606] , msg[607] , msg[608] , msg[609] , msg[610] , msg[611] , msg[612] , msg[613] , msg[614] , msg[615] , msg[616] , msg[617] , msg[618] , msg[619] , msg[620] , msg[621] , msg[622] , msg[623] , msg[624] , msg[625] , msg[626] , msg[627] , msg[628] , msg[629] , msg[630] , msg[631] , msg[632] , msg[633] , msg[634] , msg[635] , msg[636] , msg[637] , msg[638] , msg[639] , msg[640] , msg[641] , msg[642] , msg[643] , msg[644] , msg[645] , msg[646] , msg[647] , msg[648] , msg[649] , msg[650] , msg[651] , msg[652] , msg[653] , msg[654] , msg[655] , msg[656] , msg[657] , msg[658] , msg[659] , msg[660] , msg[661] , msg[662] , msg[663] , msg[664] , msg[665] , msg[666] , msg[667] , msg[668] , msg[669] , msg[670] , msg[671] , msg[672] , msg[673] , msg[674] , msg[675] , msg[676] , msg[677] , msg[678] , msg[679] , msg[680] , msg[681] , msg[682] , msg[683] , msg[684] , msg[685] , msg[686] , msg[687] , msg[688] , msg[689] , msg[690] , msg[691] , msg[692] , msg[693] , msg[694] , msg[695] , msg[696] , msg[697] , msg[698] ]  }  


 
def HMI_activations_decode( payload ):
    # decode HMI_activations from packed binary data to python dictonary
    HMI_activations_DK = '!II'
    # size of the serialized version of struct HMI_activations
    # HMI_activations size  8
    # HMI_activations n fields 2

    msg = struct.unpack( HMI_activations_DK , payload )
    return { '_message_type_' : 'HMI_activations' , 'UTC_time' : msg[0] , 'apps_active' : msg[1] }  


 
def HMIinputsByApp_active_decode( payload ):
    # decode HMIinputsByApp_active from packed binary data to python dictonary
    HMIinputsByApp_active_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp_active
    # HMIinputsByApp_active size  46
    # HMIinputsByApp_active n fields 9

    msg = struct.unpack( HMIinputsByApp_active_DK , payload )
    return { '_message_type_' : 'HMIinputsByApp_active' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'StationID' : msg[2] , 'WarningLevel' : msg[3] , 'J0f' : msg[4] , 'TargetDistancef' : msg[5] , 'TargetSpeedf' : msg[6] , 'TargetClassf' : msg[7] , 'TargetComingDirection' : msg[8] }  


 
def HMIinputsByApp_decode( payload ):
    # decode HMIinputsByApp from packed binary data to python dictonary
    HMIinputsByApp_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp
    # HMIinputsByApp size  46
    # HMIinputsByApp n fields 9

    msg = struct.unpack( HMIinputsByApp_DK , payload )
    return { '_message_type_' : 'HMIinputsByApp' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'StationID' : msg[2] , 'WarningLevel' : msg[3] , 'J0f' : msg[4] , 'TargetDistancef' : msg[5] , 'TargetSpeedf' : msg[6] , 'TargetClassf' : msg[7] , 'TargetComingDirection' : msg[8] }  


 
def FirstTrajectoryMotorPrimitivesParameters_decode( payload ):
    # decode FirstTrajectoryMotorPrimitivesParameters from packed binary data to python dictonary
    FirstTrajectoryMotorPrimitivesParameters_DK = '!Qidddddddddddddddddddddd'
    # size of the serialized version of struct FirstTrajectoryMotorPrimitivesParameters
    # FirstTrajectoryMotorPrimitivesParameters size  188
    # FirstTrajectoryMotorPrimitivesParameters n fields 24

    msg = struct.unpack( FirstTrajectoryMotorPrimitivesParameters_DK , payload )
    return { '_message_type_' : 'FirstTrajectoryMotorPrimitivesParameters' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'T0' : msg[2] , 'V0' : msg[3] , 'A0' : msg[4] , 'T1f' : msg[5] , 'J0f' : msg[6] , 'S0f' : msg[7] , 'Cr0f' : msg[8] , 'T2f' : msg[9] , 'J1f' : msg[10] , 'S1f' : msg[11] , 'Cr1f' : msg[12] , 'Sn0' : msg[13] , 'Alpha0' : msg[14] , 'Delta0' : msg[15] , 'T1nf' : msg[16] , 'Jdelta0f' : msg[17] , 'Sdelta0f' : msg[18] , 'Crdelta0f' : msg[19] , 'T2nf' : msg[20] , 'Jdelta1f' : msg[21] , 'Sdelta1f' : msg[22] , 'Crdelta1f' : msg[23] }  


 
def ManouevreTypes_decode( payload ):
    # decode ManouevreTypes from packed binary data to python dictonary
    ManouevreTypes_DK = '!QiBBBB'
    # size of the serialized version of struct ManouevreTypes
    # ManouevreTypes size  16
    # ManouevreTypes n fields 6

    msg = struct.unpack( ManouevreTypes_DK , payload )
    return { '_message_type_' : 'ManouevreTypes' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'FirstManoeuverTypeLong' : msg[2] , 'FirstManoeuverTypeLat' : msg[3] , 'SecondManoeuverTypeLong' : msg[4] , 'SecondManoeuverTypeLat' : msg[5] }  


 
def StrainGauge_decode( payload ):
    # decode StrainGauge from packed binary data to python dictonary
    StrainGauge_DK = '!QIiddd'
    # size of the serialized version of struct StrainGauge
    # StrainGauge size  40
    # StrainGauge n fields 6

    msg = struct.unpack( StrainGauge_DK , payload )
    return { '_message_type_' : 'StrainGauge' , 'UTC_time' : msg[0] , 'StripID' : msg[1] , 'Strain_gauge_Sensor_ID' : msg[2] , 'Strain_gauge_Amplitude' : msg[3] , 'Strain_gauge_event_time' : msg[4] , 'Exponential_decay' : msg[5] }  


 
def AutomationLevel_decode( payload ):
    # decode AutomationLevel from packed binary data to python dictonary
    AutomationLevel_DK = '!QB'
    # size of the serialized version of struct AutomationLevel
    # AutomationLevel size  9
    # AutomationLevel n fields 2

    msg = struct.unpack( AutomationLevel_DK , payload )
    return { '_message_type_' : 'AutomationLevel' , 'UTC_time' : msg[0] , 'Automation_Level' : msg[1] }  


 
def ParkingStatus_decode( payload ):
    # decode ParkingStatus from packed binary data to python dictonary
    ParkingStatus_DK = '!QiIIIIIIIIIII'
    # size of the serialized version of struct ParkingStatus
    # ParkingStatus size  416
    # ParkingStatus n fields 4

    msg = struct.unpack( ParkingStatus_DK , payload )
    return { '_message_type_' : 'ParkingStatus' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'IDs_free_patkings' :  [ msg[2] , msg[3] , msg[4] , msg[5] , msg[6] , msg[7] , msg[8] , msg[9] , msg[10] , msg[11] ]  , 'Number_of_free_parkings' : msg[12] }  


 
def ParkingEvent_decode( payload ):
    # decode ParkingEvent from packed binary data to python dictonary
    ParkingEvent_DK = '!QiIIIB'
    # size of the serialized version of struct ParkingEvent
    # ParkingEvent size  25
    # ParkingEvent n fields 6

    msg = struct.unpack( ParkingEvent_DK , payload )
    return { '_message_type_' : 'ParkingEvent' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'RSB_ID' : msg[2] , 'RFID_ID' : msg[3] , 'StripID' : msg[4] , 'Event' : msg[5] }  


 
def ParkingOutput_decode( payload ):
    # decode ParkingOutput from packed binary data to python dictonary
    ParkingOutput_DK = '!QiIII'
    # size of the serialized version of struct ParkingOutput
    # ParkingOutput size  24
    # ParkingOutput n fields 5

    msg = struct.unpack( ParkingOutput_DK , payload )
    return { '_message_type_' : 'ParkingOutput' , 'UTC_time' : msg[0] , 'OutputID' : msg[1] , 'RFID_ID' : msg[2] , 'Payment_Amount' : msg[3] , 'Payment_and_parking_status' : msg[4] }  


 
def VirtualToll_input_decode( payload ):
    # decode VirtualToll_input from packed binary data to python dictonary
    VirtualToll_input_DK = '!QBiiiIII'
    # size of the serialized version of struct VirtualToll_input
    # VirtualToll_input size  33
    # VirtualToll_input n fields 8

    msg = struct.unpack( VirtualToll_input_DK , payload )
    return { '_message_type_' : 'VirtualToll_input' , 'UTC_time' : msg[0] , 'StationType' : msg[1] , 'position_latitude' : msg[2] , 'position_longitude' : msg[3] , 'virtual_gate_distance' : msg[4] , 'StripID' : msg[5] , 'RSB_ID' : msg[6] , 'RFID_ID' : msg[7] }  


 
def VirtualToll_output_decode( payload ):
    # decode VirtualToll_output from packed binary data to python dictonary
    VirtualToll_output_DK = '!QIiIB'
    # size of the serialized version of struct VirtualToll_output
    # VirtualToll_output size  21
    # VirtualToll_output n fields 5

    msg = struct.unpack( VirtualToll_output_DK , payload )
    return { '_message_type_' : 'VirtualToll_output' , 'UTC_time' : msg[0] , 'RFID_ID' : msg[1] , 'virtual_gate_distance' : msg[2] , 'payment_amount' : msg[3] , 'payment_confirmation' : msg[4] }  


 
def EnvironmentData_decode( payload ):
    # decode EnvironmentData from packed binary data to python dictonary
    EnvironmentData_DK = '!IIIBBiBIIBBBB'
    # size of the serialized version of struct EnvironmentData
    # EnvironmentData size  31
    # EnvironmentData n fields 13

    msg = struct.unpack( EnvironmentData_DK , payload )
    return { '_message_type_' : 'EnvironmentData' , 'RSB_ID' : msg[0] , 'StripID' : msg[1] , 'Fog' : msg[2] , 'Road_type' : msg[3] , 'ice' : msg[4] , 'temperature' : msg[5] , 'gas_type' : msg[6] , 'gas_presence' : msg[7] , 'humidity' : msg[8] , 'Reported_surface_state' : msg[9] , 'water_layer' : msg[10] , 'show_layer' : msg[11] , 'ice_layer' : msg[12] }  


 
def SetCodriverParameters_decode( payload ):
    # decode SetCodriverParameters from packed binary data to python dictonary
    SetCodriverParameters_DK = '!Qdddddd'
    # size of the serialized version of struct SetCodriverParameters
    # SetCodriverParameters size  56
    # SetCodriverParameters n fields 7

    msg = struct.unpack( SetCodriverParameters_DK , payload )
    return { '_message_type_' : 'SetCodriverParameters' , 'UTC_time' : msg[0] , 'jerk_lower' : msg[1] , 'jerk_higher' : msg[2] , 'reaction_time' : msg[3] , 'p1' : msg[4] , 'p2' : msg[5] , 'p3' : msg[6] }  


 

# DECODING (true values)

def HostVehicle_decode_true_values( payload ):
    # decode HostVehicle from packed binary data to python dictonary, returning true values (no gain/offset)
    HostVehicle_DK = '!QddddddddBid'
    # size of the serialized version of struct HostVehicle
    # HostVehicle size  85
    # HostVehicle n fields 12

    msg = struct.unpack( HostVehicle_DK , payload )
    return { '_message_type_' : 'HostVehicle' , 'UTC_time' : msg[0] / 1 , 'Speed_vehicle_network' : msg[1] / 1 , 'LongAcc_vehicle_network' : msg[2] / 1 , 'LatAcc_vehicle_network' : msg[3] / 1 , 'YawRate_vehicle_network' : msg[4] / 1 , 'SteerWheel_vehicle_network' : msg[5] / 1 , 'SteerWheelSpeed_vehicle_network' : msg[6] / 1 , 'BrakePressure_vehicle_network' : msg[7] / 1 , 'GasPedPos_vehicle_network' : msg[8] / 1 , 'BrakePedalSwitch_vehicle_network' : msg[9] / 1 , 'VehicleType' : msg[10] / 1 , 'VehicleBarLongPos' : msg[11] / 1 }  


 
def CAM_message_decode_true_values( payload ):
    # decode CAM_message from packed binary data to python dictonary, returning true values (no gain/offset)
    CAM_message_DK = '!QIIHBiiiiiiHHHBhhBhhHB'
    # size of the serialized version of struct CAM_message
    # CAM_message size  62
    # CAM_message n fields 22

    msg = struct.unpack( CAM_message_DK , payload )
    return { '_message_type_' : 'CAM_message' , 'UTC_time' : msg[0] / 1 , 'v2x_cam_header_msgID' : msg[1] / 1 , 'v2x_cam_header_originationStationID' : msg[2] / 1 , 'v2x_cam_GenerationDeltaTime' : msg[3] / 1000 , 'v2x_cam_StationType' : msg[4] / 1 , 'v2x_cam_Latitude' : msg[5] / 10000000 , 'v2x_cam_Longitude' : msg[6] / 10000000 , 'v2x_cam_ConfidenceEllipse_semiMajor' : msg[7] / 100 , 'v2x_cam_ConfidenceEllipse_semiMinor' : msg[8] / 100 , 'v2x_cam_ConfidenceEllipse_semiMajorOrientation' : msg[9] / 10 , 'v2x_cam_Altitude' : msg[10] / 100 , 'v2x_cam_Heading' : msg[11] / 10 , 'v2x_cam_Speed' : msg[12] / 100 , 'v2x_cam_VehicleLength' : msg[13] / 10 , 'v2x_cam_VehicleWidth' : msg[14] / 10 , 'v2x_cam_LongitudinalAcceleration' : msg[15] / 10 , 'v2x_cam_YawRate' : msg[16] / 100 , 'v2x_cam_AccelerationControl' : msg[17] / 1 , 'v2x_cam_SteeringWheelAngle' : msg[18] / 0.66666667 , 'v2x_cam_LateralAcceleration' : msg[19] / 10 , 'v2x_cam_VehicleRole' : msg[20] / 1 , 'v2x_cam_ExteriorLights_status' : msg[21] / 1 }  


 
def DENM_message_decode_true_values( payload ):
    # decode DENM_message from packed binary data to python dictonary, returning true values (no gain/offset)
    DENM_message_DK = '!QIIHQiiiiiiBBiBiiHHiI'
    # size of the serialized version of struct DENM_message
    # DENM_message size  77
    # DENM_message n fields 21

    msg = struct.unpack( DENM_message_DK , payload )
    return { '_message_type_' : 'DENM_message' , 'UTC_time' : msg[0] / 1 , 'v2x_header_StationID' : msg[1] / 1 , 'v2x_header_originationStationID' : msg[2] / 1 , 'v2x_denm_sequenceNumber' : msg[3] / 1 , 'v2x_denm_detectionTime' : msg[4] / 1 , 'v2x_denm_eventPosition_latitude' : msg[5] / 10000000 , 'v2x_denm_eventPosition_longitude' : msg[6] / 10000000 , 'v2x_denm_ConfidenceEllipse_semiMajor' : msg[7] / 100 , 'v2x_denm_ConfidenceEllipse_semiMinor' : msg[8] / 100 , 'v2x_denm_ConfidenceEllipse_semiMajorOrientation' : msg[9] / 10 , 'v2x_denm_eventPosition_altitude' : msg[10] / 100 , 'v2x_denm_relevanceDistance' : msg[11] / 1 , 'v2x_denm_relevanceTrafficDirection' : msg[12] / 1 , 'v2x_denm_validityDuration' : msg[13] / 1 , 'v2x_denm_stationType' : msg[14] / 1 , 'v2x_denm_eventType_CauseCode' : msg[15] / 1 , 'v2x_denm_eventType_SubCauseCode' : msg[16] / 1 , 'v2x_denm_frictionCoefficient_value' : msg[17] / 1000 , 'v2x_denm_frictionCoefficient_confidence' : msg[18] / 1000 , 'v2x_denm_alacarte_LanePosition' : msg[19] / 100 , 'v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus' : msg[20] / 1 }  


 
def Strip_CAM_decode_true_values( payload ):
    # decode Strip_CAM from packed binary data to python dictonary, returning true values (no gain/offset)
    Strip_CAM_DK = '!QIIIBiiiiiiHHHBiB'
    # size of the serialized version of struct Strip_CAM
    # Strip_CAM size  57
    # Strip_CAM n fields 17

    msg = struct.unpack( Strip_CAM_DK , payload )
    return { '_message_type_' : 'Strip_CAM' , 'UTC_time' : msg[0] / 1 , 'originationStationID' : msg[1] / 1 , 'StripID' : msg[2] / 1 , 'RFID_ID' : msg[3] / 1 , 'StationType' : msg[4] / 1 , 'Latitude' : msg[5] / 10000000 , 'Longitude' : msg[6] / 10000000 , 'ConfidenceEllipse_semiMajor' : msg[7] / 100 , 'ConfidenceEllipse_semiMinor' : msg[8] / 100 , 'ConfidenceEllipse_semiMajorOrientation' : msg[9] / 10 , 'Altitude' : msg[10] / 100 , 'Heading' : msg[11] / 10 , 'Speed' : msg[12] / 100 , 'VehicleLength' : msg[13] / 10 , 'VehicleWidth' : msg[14] / 10 , 'LongitudinalAcceleration' : msg[15] / 10 , 'Lane_ID' : msg[16] / 1 }  


 
def MAPEM_message_decode_true_values( payload ):
    # decode MAPEM_message from packed binary data to python dictonary, returning true values (no gain/offset)
    MAPEM_message_DK = '!QIIBIiiiiBiBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB'
    # size of the serialized version of struct MAPEM_message
    # MAPEM_message size  243242
    # MAPEM_message n fields 21

    msg = struct.unpack( MAPEM_message_DK , payload )
    return { '_message_type_' : 'MAPEM_message' , 'UTC_time' : msg[0] / 1 , 'v2x_header_msgID' : msg[1] / 1 , 'v2x_header_originationStationID' : msg[2] / 1 , 'v2x_map_intersection_name' : msg[3] / 1 , 'v2x_map_intersection_id' : msg[4] / 1 , 'v2x_map_intersection_refLatitude' : msg[5] / 10000 , 'v2x_map_intersection_refLongitude' : msg[6] / 10000 , 'v2x_map_intersection_refAltitude' : msg[7] / 10 , 'v2x_map_intersection_laneWidth' : msg[8] / 100 , 'v2x_map_intersection_speedLimitType' : msg[9] / 1 , 'v2x_map_intersection_speedLimitValue' : msg[10] / 50 , 'v2x_map_intersection_LaneSet_ID' :  [ msg[11] / 1 , msg[12] / 1 , msg[13] / 1 , msg[14] / 1 , msg[15] / 1 , msg[16] / 1 , msg[17] / 1 , msg[18] / 1 , msg[19] / 1 , msg[20] / 1 , msg[21] / 1 , msg[22] / 1 , msg[23] / 1 , msg[24] / 1 , msg[25] / 1 , msg[26] / 1 ]  , 'v2x_map_intersection_LaneSet_approach_ID' :  [ msg[27] / 1 , msg[28] / 1 , msg[29] / 1 , msg[30] / 1 , msg[31] / 1 , msg[32] / 1 , msg[33] / 1 , msg[34] / 1 , msg[35] / 1 , msg[36] / 1 , msg[37] / 1 , msg[38] / 1 , msg[39] / 1 , msg[40] / 1 , msg[41] / 1 , msg[42] / 1 ]  , 'v2x_map_intersection_LaneSet_laneAttributes_directionalUse' :  [ msg[43] / 1 , msg[44] / 1 , msg[45] / 1 , msg[46] / 1 , msg[47] / 1 , msg[48] / 1 , msg[49] / 1 , msg[50] / 1 , msg[51] / 1 , msg[52] / 1 , msg[53] / 1 , msg[54] / 1 , msg[55] / 1 , msg[56] / 1 , msg[57] / 1 , msg[58] / 1 ]  , 'v2x_map_intersection_LaneSet_nodeList_Xoffset' :  [ msg[59] / 100 , msg[60] / 100 , msg[61] / 100 , msg[62] / 100 , msg[63] / 100 , msg[64] / 100 , msg[65] / 100 , msg[66] / 100 , msg[67] / 100 , msg[68] / 100 , msg[69] / 100 , msg[70] / 100 , msg[71] / 100 , msg[72] / 100 , msg[73] / 100 , msg[74] / 100 , msg[75] / 100 , msg[76] / 100 , msg[77] / 100 , msg[78] / 100 , msg[79] / 100 , msg[80] / 100 , msg[81] / 100 , msg[82] / 100 , msg[83] / 100 , msg[84] / 100 , msg[85] / 100 , msg[86] / 100 , msg[87] / 100 , msg[88] / 100 , msg[89] / 100 , msg[90] / 100 , msg[91] / 100 , msg[92] / 100 , msg[93] / 100 , msg[94] / 100 , msg[95] / 100 , msg[96] / 100 , msg[97] / 100 , msg[98] / 100 , msg[99] / 100 , msg[100] / 100 , msg[101] / 100 , msg[102] / 100 , msg[103] / 100 , msg[104] / 100 , msg[105] / 100 , msg[106] / 100 , msg[107] / 100 , msg[108] / 100 , msg[109] / 100 , msg[110] / 100 , msg[111] / 100 , msg[112] / 100 , msg[113] / 100 , msg[114] / 100 , msg[115] / 100 , msg[116] / 100 , msg[117] / 100 , msg[118] / 100 , msg[119] / 100 , msg[120] / 100 , msg[121] / 100 , msg[122] / 100 , msg[123] / 100 , msg[124] / 100 , msg[125] / 100 , msg[126] / 100 , msg[127] / 100 , msg[128] / 100 , msg[129] / 100 , msg[130] / 100 , msg[131] / 100 , msg[132] / 100 , msg[133] / 100 , msg[134] / 100 , msg[135] / 100 , msg[136] / 100 , msg[137] / 100 , msg[138] / 100 , msg[139] / 100 , msg[140] / 100 , msg[141] / 100 , msg[142] / 100 , msg[143] / 100 , msg[144] / 100 , msg[145] / 100 , msg[146] / 100 , msg[147] / 100 , msg[148] / 100 , msg[149] / 100 , msg[150] / 100 , msg[151] / 100 , msg[152] / 100 , msg[153] / 100 , msg[154] / 100 , msg[155] / 100 , msg[156] / 100 , msg[157] / 100 , msg[158] / 100 , msg[159] / 100 , msg[160] / 100 , msg[161] / 100 , msg[162] / 100 , msg[163] / 100 , msg[164] / 100 , msg[165] / 100 , msg[166] / 100 , msg[167] / 100 , msg[168] / 100 , msg[169] / 100 , msg[170] / 100 , msg[171] / 100 , msg[172] / 100 , msg[173] / 100 , msg[174] / 100 , msg[175] / 100 , msg[176] / 100 , msg[177] / 100 , msg[178] / 100 , msg[179] / 100 , msg[180] / 100 , msg[181] / 100 , msg[182] / 100 , msg[183] / 100 , msg[184] / 100 , msg[185] / 100 , msg[186] / 100 , msg[187] / 100 , msg[188] / 100 , msg[189] / 100 , msg[190] / 100 , msg[191] / 100 , msg[192] / 100 , msg[193] / 100 , msg[194] / 100 , msg[195] / 100 , msg[196] / 100 , msg[197] / 100 , msg[198] / 100 , msg[199] / 100 , msg[200] / 100 , msg[201] / 100 , msg[202] / 100 , msg[203] / 100 , msg[204] / 100 , msg[205] / 100 , msg[206] / 100 , msg[207] / 100 , msg[208] / 100 , msg[209] / 100 , msg[210] / 100 , msg[211] / 100 , msg[212] / 100 , msg[213] / 100 , msg[214] / 100 , msg[215] / 100 , msg[216] / 100 , msg[217] / 100 , msg[218] / 100 ]  , 'v2x_map_intersection_LaneSet_nodeList_Yoffset' :  [ msg[219] / 100 , msg[220] / 100 , msg[221] / 100 , msg[222] / 100 , msg[223] / 100 , msg[224] / 100 , msg[225] / 100 , msg[226] / 100 , msg[227] / 100 , msg[228] / 100 , msg[229] / 100 , msg[230] / 100 , msg[231] / 100 , msg[232] / 100 , msg[233] / 100 , msg[234] / 100 , msg[235] / 100 , msg[236] / 100 , msg[237] / 100 , msg[238] / 100 , msg[239] / 100 , msg[240] / 100 , msg[241] / 100 , msg[242] / 100 , msg[243] / 100 , msg[244] / 100 , msg[245] / 100 , msg[246] / 100 , msg[247] / 100 , msg[248] / 100 , msg[249] / 100 , msg[250] / 100 , msg[251] / 100 , msg[252] / 100 , msg[253] / 100 , msg[254] / 100 , msg[255] / 100 , msg[256] / 100 , msg[257] / 100 , msg[258] / 100 , msg[259] / 100 , msg[260] / 100 , msg[261] / 100 , msg[262] / 100 , msg[263] / 100 , msg[264] / 100 , msg[265] / 100 , msg[266] / 100 , msg[267] / 100 , msg[268] / 100 , msg[269] / 100 , msg[270] / 100 , msg[271] / 100 , msg[272] / 100 , msg[273] / 100 , msg[274] / 100 , msg[275] / 100 , msg[276] / 100 , msg[277] / 100 , msg[278] / 100 , msg[279] / 100 , msg[280] / 100 , msg[281] / 100 , msg[282] / 100 , msg[283] / 100 , msg[284] / 100 , msg[285] / 100 , msg[286] / 100 , msg[287] / 100 , msg[288] / 100 , msg[289] / 100 , msg[290] / 100 , msg[291] / 100 , msg[292] / 100 , msg[293] / 100 , msg[294] / 100 , msg[295] / 100 , msg[296] / 100 , msg[297] / 100 , msg[298] / 100 , msg[299] / 100 , msg[300] / 100 , msg[301] / 100 , msg[302] / 100 , msg[303] / 100 , msg[304] / 100 , msg[305] / 100 , msg[306] / 100 , msg[307] / 100 , msg[308] / 100 , msg[309] / 100 , msg[310] / 100 , msg[311] / 100 , msg[312] / 100 , msg[313] / 100 , msg[314] / 100 , msg[315] / 100 , msg[316] / 100 , msg[317] / 100 , msg[318] / 100 , msg[319] / 100 , msg[320] / 100 , msg[321] / 100 , msg[322] / 100 , msg[323] / 100 , msg[324] / 100 , msg[325] / 100 , msg[326] / 100 , msg[327] / 100 , msg[328] / 100 , msg[329] / 100 , msg[330] / 100 , msg[331] / 100 , msg[332] / 100 , msg[333] / 100 , msg[334] / 100 , msg[335] / 100 , msg[336] / 100 , msg[337] / 100 , msg[338] / 100 , msg[339] / 100 , msg[340] / 100 , msg[341] / 100 , msg[342] / 100 , msg[343] / 100 , msg[344] / 100 , msg[345] / 100 , msg[346] / 100 , msg[347] / 100 , msg[348] / 100 , msg[349] / 100 , msg[350] / 100 , msg[351] / 100 , msg[352] / 100 , msg[353] / 100 , msg[354] / 100 , msg[355] / 100 , msg[356] / 100 , msg[357] / 100 , msg[358] / 100 , msg[359] / 100 , msg[360] / 100 , msg[361] / 100 , msg[362] / 100 , msg[363] / 100 , msg[364] / 100 , msg[365] / 100 , msg[366] / 100 , msg[367] / 100 , msg[368] / 100 , msg[369] / 100 , msg[370] / 100 , msg[371] / 100 , msg[372] / 100 , msg[373] / 100 , msg[374] / 100 , msg[375] / 100 , msg[376] / 100 , msg[377] / 100 , msg[378] / 100 ]  , 'v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue' :  [ msg[379] / 1 , msg[380] / 1 , msg[381] / 1 , msg[382] / 1 , msg[383] / 1 , msg[384] / 1 , msg[385] / 1 , msg[386] / 1 , msg[387] / 1 , msg[388] / 1 , msg[389] / 1 , msg[390] / 1 , msg[391] / 1 , msg[392] / 1 , msg[393] / 1 , msg[394] / 1 ]  , 'v2x_map_intersection_LaneType_ID' :  [ msg[395] / 1 , msg[396] / 1 , msg[397] / 1 , msg[398] / 1 , msg[399] / 1 , msg[400] / 1 , msg[401] / 1 , msg[402] / 1 , msg[403] / 1 , msg[404] / 1 , msg[405] / 1 , msg[406] / 1 , msg[407] / 1 , msg[408] / 1 , msg[409] / 1 , msg[410] / 1 ]  , 'v2x_map_intersection_ConnectingLane_allowedManeuvers' :  [ msg[411] / 1 , msg[412] / 1 , msg[413] / 1 , msg[414] / 1 , msg[415] / 1 , msg[416] / 1 , msg[417] / 1 , msg[418] / 1 , msg[419] / 1 , msg[420] / 1 , msg[421] / 1 , msg[422] / 1 , msg[423] / 1 , msg[424] / 1 , msg[425] / 1 , msg[426] / 1 , msg[427] / 1 , msg[428] / 1 , msg[429] / 1 , msg[430] / 1 , msg[431] / 1 , msg[432] / 1 , msg[433] / 1 , msg[434] / 1 , msg[435] / 1 , msg[436] / 1 , msg[437] / 1 , msg[438] / 1 , msg[439] / 1 , msg[440] / 1 , msg[441] / 1 , msg[442] / 1 , msg[443] / 1 , msg[444] / 1 , msg[445] / 1 , msg[446] / 1 , msg[447] / 1 , msg[448] / 1 , msg[449] / 1 , msg[450] / 1 , msg[451] / 1 , msg[452] / 1 , msg[453] / 1 , msg[454] / 1 , msg[455] / 1 , msg[456] / 1 , msg[457] / 1 , msg[458] / 1 , msg[459] / 1 , msg[460] / 1 , msg[461] / 1 , msg[462] / 1 , msg[463] / 1 , msg[464] / 1 , msg[465] / 1 , msg[466] / 1 , msg[467] / 1 , msg[468] / 1 , msg[469] / 1 , msg[470] / 1 , msg[471] / 1 , msg[472] / 1 , msg[473] / 1 , msg[474] / 1 , msg[475] / 1 , msg[476] / 1 , msg[477] / 1 , msg[478] / 1 , msg[479] / 1 , msg[480] / 1 , msg[481] / 1 , msg[482] / 1 , msg[483] / 1 , msg[484] / 1 , msg[485] / 1 , msg[486] / 1 , msg[487] / 1 , msg[488] / 1 , msg[489] / 1 , msg[490] / 1 , msg[491] / 1 , msg[492] / 1 , msg[493] / 1 , msg[494] / 1 , msg[495] / 1 , msg[496] / 1 , msg[497] / 1 , msg[498] / 1 , msg[499] / 1 , msg[500] / 1 , msg[501] / 1 , msg[502] / 1 , msg[503] / 1 , msg[504] / 1 , msg[505] / 1 , msg[506] / 1 ]  , 'v2x_map_intersection_LaneSet_connectingLaneID' :  [ msg[507] / 1 , msg[508] / 1 , msg[509] / 1 , msg[510] / 1 , msg[511] / 1 , msg[512] / 1 , msg[513] / 1 , msg[514] / 1 , msg[515] / 1 , msg[516] / 1 , msg[517] / 1 , msg[518] / 1 , msg[519] / 1 , msg[520] / 1 , msg[521] / 1 , msg[522] / 1 , msg[523] / 1 , msg[524] / 1 , msg[525] / 1 , msg[526] / 1 , msg[527] / 1 , msg[528] / 1 , msg[529] / 1 , msg[530] / 1 , msg[531] / 1 , msg[532] / 1 , msg[533] / 1 , msg[534] / 1 , msg[535] / 1 , msg[536] / 1 , msg[537] / 1 , msg[538] / 1 , msg[539] / 1 , msg[540] / 1 , msg[541] / 1 , msg[542] / 1 , msg[543] / 1 , msg[544] / 1 , msg[545] / 1 , msg[546] / 1 , msg[547] / 1 , msg[548] / 1 , msg[549] / 1 , msg[550] / 1 , msg[551] / 1 , msg[552] / 1 , msg[553] / 1 , msg[554] / 1 , msg[555] / 1 , msg[556] / 1 , msg[557] / 1 , msg[558] / 1 , msg[559] / 1 , msg[560] / 1 , msg[561] / 1 , msg[562] / 1 , msg[563] / 1 , msg[564] / 1 , msg[565] / 1 , msg[566] / 1 , msg[567] / 1 , msg[568] / 1 , msg[569] / 1 , msg[570] / 1 , msg[571] / 1 , msg[572] / 1 , msg[573] / 1 , msg[574] / 1 , msg[575] / 1 , msg[576] / 1 , msg[577] / 1 , msg[578] / 1 , msg[579] / 1 , msg[580] / 1 , msg[581] / 1 , msg[582] / 1 , msg[583] / 1 , msg[584] / 1 , msg[585] / 1 , msg[586] / 1 , msg[587] / 1 , msg[588] / 1 , msg[589] / 1 , msg[590] / 1 , msg[591] / 1 , msg[592] / 1 , msg[593] / 1 , msg[594] / 1 , msg[595] / 1 , msg[596] / 1 , msg[597] / 1 , msg[598] / 1 , msg[599] / 1 , msg[600] / 1 , msg[601] / 1 , msg[602] / 1 ]  , 'v2x_map_intersection_LaneSet_connectingLaneSignalGroup' :  [ msg[603] / 1 , msg[604] / 1 , msg[605] / 1 , msg[606] / 1 , msg[607] / 1 , msg[608] / 1 , msg[609] / 1 , msg[610] / 1 , msg[611] / 1 , msg[612] / 1 , msg[613] / 1 , msg[614] / 1 , msg[615] / 1 , msg[616] / 1 , msg[617] / 1 , msg[618] / 1 , msg[619] / 1 , msg[620] / 1 , msg[621] / 1 , msg[622] / 1 , msg[623] / 1 , msg[624] / 1 , msg[625] / 1 , msg[626] / 1 , msg[627] / 1 , msg[628] / 1 , msg[629] / 1 , msg[630] / 1 , msg[631] / 1 , msg[632] / 1 , msg[633] / 1 , msg[634] / 1 , msg[635] / 1 , msg[636] / 1 , msg[637] / 1 , msg[638] / 1 , msg[639] / 1 , msg[640] / 1 , msg[641] / 1 , msg[642] / 1 , msg[643] / 1 , msg[644] / 1 , msg[645] / 1 , msg[646] / 1 , msg[647] / 1 , msg[648] / 1 , msg[649] / 1 , msg[650] / 1 , msg[651] / 1 , msg[652] / 1 , msg[653] / 1 , msg[654] / 1 , msg[655] / 1 , msg[656] / 1 , msg[657] / 1 , msg[658] / 1 , msg[659] / 1 , msg[660] / 1 , msg[661] / 1 , msg[662] / 1 , msg[663] / 1 , msg[664] / 1 , msg[665] / 1 , msg[666] / 1 , msg[667] / 1 , msg[668] / 1 , msg[669] / 1 , msg[670] / 1 , msg[671] / 1 , msg[672] / 1 , msg[673] / 1 , msg[674] / 1 , msg[675] / 1 , msg[676] / 1 , msg[677] / 1 , msg[678] / 1 , msg[679] / 1 , msg[680] / 1 , msg[681] / 1 , msg[682] / 1 , msg[683] / 1 , msg[684] / 1 , msg[685] / 1 , msg[686] / 1 , msg[687] / 1 , msg[688] / 1 , msg[689] / 1 , msg[690] / 1 , msg[691] / 1 , msg[692] / 1 , msg[693] / 1 , msg[694] / 1 , msg[695] / 1 , msg[696] / 1 , msg[697] / 1 , msg[698] / 1 ]  }  


 
def HMI_activations_decode_true_values( payload ):
    # decode HMI_activations from packed binary data to python dictonary, returning true values (no gain/offset)
    HMI_activations_DK = '!II'
    # size of the serialized version of struct HMI_activations
    # HMI_activations size  8
    # HMI_activations n fields 2

    msg = struct.unpack( HMI_activations_DK , payload )
    return { '_message_type_' : 'HMI_activations' , 'UTC_time' : msg[0] / 1 , 'apps_active' : msg[1] / 1 }  


 
def HMIinputsByApp_active_decode_true_values( payload ):
    # decode HMIinputsByApp_active from packed binary data to python dictonary, returning true values (no gain/offset)
    HMIinputsByApp_active_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp_active
    # HMIinputsByApp_active size  46
    # HMIinputsByApp_active n fields 9

    msg = struct.unpack( HMIinputsByApp_active_DK , payload )
    return { '_message_type_' : 'HMIinputsByApp_active' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'StationID' : msg[2] / 1 , 'WarningLevel' : msg[3] / 1 , 'J0f' : msg[4] / 1 , 'TargetDistancef' : msg[5] / 1 , 'TargetSpeedf' : msg[6] / 1 , 'TargetClassf' : msg[7] / 1 , 'TargetComingDirection' : msg[8] / 1 }  


 
def HMIinputsByApp_decode_true_values( payload ):
    # decode HMIinputsByApp from packed binary data to python dictonary, returning true values (no gain/offset)
    HMIinputsByApp_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp
    # HMIinputsByApp size  46
    # HMIinputsByApp n fields 9

    msg = struct.unpack( HMIinputsByApp_DK , payload )
    return { '_message_type_' : 'HMIinputsByApp' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'StationID' : msg[2] / 1 , 'WarningLevel' : msg[3] / 1 , 'J0f' : msg[4] / 1 , 'TargetDistancef' : msg[5] / 1 , 'TargetSpeedf' : msg[6] / 1 , 'TargetClassf' : msg[7] / 1 , 'TargetComingDirection' : msg[8] / 1 }  


 
def FirstTrajectoryMotorPrimitivesParameters_decode_true_values( payload ):
    # decode FirstTrajectoryMotorPrimitivesParameters from packed binary data to python dictonary, returning true values (no gain/offset)
    FirstTrajectoryMotorPrimitivesParameters_DK = '!Qidddddddddddddddddddddd'
    # size of the serialized version of struct FirstTrajectoryMotorPrimitivesParameters
    # FirstTrajectoryMotorPrimitivesParameters size  188
    # FirstTrajectoryMotorPrimitivesParameters n fields 24

    msg = struct.unpack( FirstTrajectoryMotorPrimitivesParameters_DK , payload )
    return { '_message_type_' : 'FirstTrajectoryMotorPrimitivesParameters' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'T0' : msg[2] / 1 , 'V0' : msg[3] / 1 , 'A0' : msg[4] / 1 , 'T1f' : msg[5] / 1 , 'J0f' : msg[6] / 1 , 'S0f' : msg[7] / 1 , 'Cr0f' : msg[8] / 1 , 'T2f' : msg[9] / 1 , 'J1f' : msg[10] / 1 , 'S1f' : msg[11] / 1 , 'Cr1f' : msg[12] / 1 , 'Sn0' : msg[13] / 1 , 'Alpha0' : msg[14] / 1 , 'Delta0' : msg[15] / 1 , 'T1nf' : msg[16] / 1 , 'Jdelta0f' : msg[17] / 1 , 'Sdelta0f' : msg[18] / 1 , 'Crdelta0f' : msg[19] / 1 , 'T2nf' : msg[20] / 1 , 'Jdelta1f' : msg[21] / 1 , 'Sdelta1f' : msg[22] / 1 , 'Crdelta1f' : msg[23] / 1 }  


 
def ManouevreTypes_decode_true_values( payload ):
    # decode ManouevreTypes from packed binary data to python dictonary, returning true values (no gain/offset)
    ManouevreTypes_DK = '!QiBBBB'
    # size of the serialized version of struct ManouevreTypes
    # ManouevreTypes size  16
    # ManouevreTypes n fields 6

    msg = struct.unpack( ManouevreTypes_DK , payload )
    return { '_message_type_' : 'ManouevreTypes' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'FirstManoeuverTypeLong' : msg[2] / 1 , 'FirstManoeuverTypeLat' : msg[3] / 1 , 'SecondManoeuverTypeLong' : msg[4] / 1 , 'SecondManoeuverTypeLat' : msg[5] / 1 }  


 
def StrainGauge_decode_true_values( payload ):
    # decode StrainGauge from packed binary data to python dictonary, returning true values (no gain/offset)
    StrainGauge_DK = '!QIiddd'
    # size of the serialized version of struct StrainGauge
    # StrainGauge size  40
    # StrainGauge n fields 6

    msg = struct.unpack( StrainGauge_DK , payload )
    return { '_message_type_' : 'StrainGauge' , 'UTC_time' : msg[0] / 1 , 'StripID' : msg[1] / 1 , 'Strain_gauge_Sensor_ID' : msg[2] / 1 , 'Strain_gauge_Amplitude' : msg[3] / 1 , 'Strain_gauge_event_time' : msg[4] / 1 , 'Exponential_decay' : msg[5] / 1 }  


 
def AutomationLevel_decode_true_values( payload ):
    # decode AutomationLevel from packed binary data to python dictonary, returning true values (no gain/offset)
    AutomationLevel_DK = '!QB'
    # size of the serialized version of struct AutomationLevel
    # AutomationLevel size  9
    # AutomationLevel n fields 2

    msg = struct.unpack( AutomationLevel_DK , payload )
    return { '_message_type_' : 'AutomationLevel' , 'UTC_time' : msg[0] / 1 , 'Automation_Level' : msg[1] / 1 }  


 
def ParkingStatus_decode_true_values( payload ):
    # decode ParkingStatus from packed binary data to python dictonary, returning true values (no gain/offset)
    ParkingStatus_DK = '!QiIIIIIIIIIII'
    # size of the serialized version of struct ParkingStatus
    # ParkingStatus size  416
    # ParkingStatus n fields 4

    msg = struct.unpack( ParkingStatus_DK , payload )
    return { '_message_type_' : 'ParkingStatus' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'IDs_free_patkings' :  [ msg[2] / 1 , msg[3] / 1 , msg[4] / 1 , msg[5] / 1 , msg[6] / 1 , msg[7] / 1 , msg[8] / 1 , msg[9] / 1 , msg[10] / 1 , msg[11] / 1 ]  , 'Number_of_free_parkings' : msg[12] / 1 }  


 
def ParkingEvent_decode_true_values( payload ):
    # decode ParkingEvent from packed binary data to python dictonary, returning true values (no gain/offset)
    ParkingEvent_DK = '!QiIIIB'
    # size of the serialized version of struct ParkingEvent
    # ParkingEvent size  25
    # ParkingEvent n fields 6

    msg = struct.unpack( ParkingEvent_DK , payload )
    return { '_message_type_' : 'ParkingEvent' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'RSB_ID' : msg[2] / 1 , 'RFID_ID' : msg[3] / 1 , 'StripID' : msg[4] / 1 , 'Event' : msg[5] / 1 }  


 
def ParkingOutput_decode_true_values( payload ):
    # decode ParkingOutput from packed binary data to python dictonary, returning true values (no gain/offset)
    ParkingOutput_DK = '!QiIII'
    # size of the serialized version of struct ParkingOutput
    # ParkingOutput size  24
    # ParkingOutput n fields 5

    msg = struct.unpack( ParkingOutput_DK , payload )
    return { '_message_type_' : 'ParkingOutput' , 'UTC_time' : msg[0] / 1 , 'OutputID' : msg[1] / 1 , 'RFID_ID' : msg[2] / 1 , 'Payment_Amount' : msg[3] / 100 , 'Payment_and_parking_status' : msg[4] / 1 }  


 
def VirtualToll_input_decode_true_values( payload ):
    # decode VirtualToll_input from packed binary data to python dictonary, returning true values (no gain/offset)
    VirtualToll_input_DK = '!QBiiiIII'
    # size of the serialized version of struct VirtualToll_input
    # VirtualToll_input size  33
    # VirtualToll_input n fields 8

    msg = struct.unpack( VirtualToll_input_DK , payload )
    return { '_message_type_' : 'VirtualToll_input' , 'UTC_time' : msg[0] / 1 , 'StationType' : msg[1] / 1 , 'position_latitude' : msg[2] / 10000000 , 'position_longitude' : msg[3] / 10000000 , 'virtual_gate_distance' : msg[4] / 1 , 'StripID' : msg[5] / 1 , 'RSB_ID' : msg[6] / 1 , 'RFID_ID' : msg[7] / 1 }  


 
def VirtualToll_output_decode_true_values( payload ):
    # decode VirtualToll_output from packed binary data to python dictonary, returning true values (no gain/offset)
    VirtualToll_output_DK = '!QIiIB'
    # size of the serialized version of struct VirtualToll_output
    # VirtualToll_output size  21
    # VirtualToll_output n fields 5

    msg = struct.unpack( VirtualToll_output_DK , payload )
    return { '_message_type_' : 'VirtualToll_output' , 'UTC_time' : msg[0] / 1 , 'RFID_ID' : msg[1] / 1 , 'virtual_gate_distance' : msg[2] / 1 , 'payment_amount' : msg[3] / 100 , 'payment_confirmation' : msg[4] / 1 }  


 
def EnvironmentData_decode_true_values( payload ):
    # decode EnvironmentData from packed binary data to python dictonary, returning true values (no gain/offset)
    EnvironmentData_DK = '!IIIBBiBIIBBBB'
    # size of the serialized version of struct EnvironmentData
    # EnvironmentData size  31
    # EnvironmentData n fields 13

    msg = struct.unpack( EnvironmentData_DK , payload )
    return { '_message_type_' : 'EnvironmentData' , 'RSB_ID' : msg[0] / 1 , 'StripID' : msg[1] / 1 , 'Fog' : msg[2] / 1 , 'Road_type' : msg[3] / 1 , 'ice' : msg[4] / 1 , 'temperature' : msg[5] / 10 , 'gas_type' : msg[6] / 1 , 'gas_presence' : msg[7] / 100 , 'humidity' : msg[8] / 1000 , 'Reported_surface_state' : msg[9] / 1 , 'water_layer' : msg[10] / 10 , 'show_layer' : msg[11] / 10 , 'ice_layer' : msg[12] / 10 }  


 
def SetCodriverParameters_decode_true_values( payload ):
    # decode SetCodriverParameters from packed binary data to python dictonary, returning true values (no gain/offset)
    SetCodriverParameters_DK = '!Qdddddd'
    # size of the serialized version of struct SetCodriverParameters
    # SetCodriverParameters size  56
    # SetCodriverParameters n fields 7

    msg = struct.unpack( SetCodriverParameters_DK , payload )
    return { '_message_type_' : 'SetCodriverParameters' , 'UTC_time' : msg[0] / 1 , 'jerk_lower' : msg[1] / 1 , 'jerk_higher' : msg[2] / 1 , 'reaction_time' : msg[3] / 1 , 'p1' : msg[4] / 1 , 'p2' : msg[5] / 1 , 'p3' : msg[6] / 1 }  


 

# ENCODING

def HostVehicle_encode( dict ):
    # encode HostVehicle from python dictonary to packed binary data
    HostVehicle_DK = '!QddddddddBid'
    # size of the serialized version of struct HostVehicle
    # HostVehicle size  85
    # HostVehicle n fields 12

    return struct.pack( HostVehicle_DK , dict['UTC_time'] , dict['Speed_vehicle_network'] , dict['LongAcc_vehicle_network'] , dict['LatAcc_vehicle_network'] , dict['YawRate_vehicle_network'] , dict['SteerWheel_vehicle_network'] , dict['SteerWheelSpeed_vehicle_network'] , dict['BrakePressure_vehicle_network'] , dict['GasPedPos_vehicle_network'] , dict['BrakePedalSwitch_vehicle_network'] , dict['VehicleType'] , dict['VehicleBarLongPos'] )  


 
def CAM_message_encode( dict ):
    # encode CAM_message from python dictonary to packed binary data
    CAM_message_DK = '!QIIHBiiiiiiHHHBhhBhhHB'
    # size of the serialized version of struct CAM_message
    # CAM_message size  62
    # CAM_message n fields 22

    return struct.pack( CAM_message_DK , dict['UTC_time'] , dict['v2x_cam_header_msgID'] , dict['v2x_cam_header_originationStationID'] , dict['v2x_cam_GenerationDeltaTime'] , dict['v2x_cam_StationType'] , dict['v2x_cam_Latitude'] , dict['v2x_cam_Longitude'] , dict['v2x_cam_ConfidenceEllipse_semiMajor'] , dict['v2x_cam_ConfidenceEllipse_semiMinor'] , dict['v2x_cam_ConfidenceEllipse_semiMajorOrientation'] , dict['v2x_cam_Altitude'] , dict['v2x_cam_Heading'] , dict['v2x_cam_Speed'] , dict['v2x_cam_VehicleLength'] , dict['v2x_cam_VehicleWidth'] , dict['v2x_cam_LongitudinalAcceleration'] , dict['v2x_cam_YawRate'] , dict['v2x_cam_AccelerationControl'] , dict['v2x_cam_SteeringWheelAngle'] , dict['v2x_cam_LateralAcceleration'] , dict['v2x_cam_VehicleRole'] , dict['v2x_cam_ExteriorLights_status'] )  


 
def DENM_message_encode( dict ):
    # encode DENM_message from python dictonary to packed binary data
    DENM_message_DK = '!QIIHQiiiiiiBBiBiiHHiI'
    # size of the serialized version of struct DENM_message
    # DENM_message size  77
    # DENM_message n fields 21

    return struct.pack( DENM_message_DK , dict['UTC_time'] , dict['v2x_header_StationID'] , dict['v2x_header_originationStationID'] , dict['v2x_denm_sequenceNumber'] , dict['v2x_denm_detectionTime'] , dict['v2x_denm_eventPosition_latitude'] , dict['v2x_denm_eventPosition_longitude'] , dict['v2x_denm_ConfidenceEllipse_semiMajor'] , dict['v2x_denm_ConfidenceEllipse_semiMinor'] , dict['v2x_denm_ConfidenceEllipse_semiMajorOrientation'] , dict['v2x_denm_eventPosition_altitude'] , dict['v2x_denm_relevanceDistance'] , dict['v2x_denm_relevanceTrafficDirection'] , dict['v2x_denm_validityDuration'] , dict['v2x_denm_stationType'] , dict['v2x_denm_eventType_CauseCode'] , dict['v2x_denm_eventType_SubCauseCode'] , dict['v2x_denm_frictionCoefficient_value'] , dict['v2x_denm_frictionCoefficient_confidence'] , dict['v2x_denm_alacarte_LanePosition'] , dict['v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus'] )  


 
def Strip_CAM_encode( dict ):
    # encode Strip_CAM from python dictonary to packed binary data
    Strip_CAM_DK = '!QIIIBiiiiiiHHHBiB'
    # size of the serialized version of struct Strip_CAM
    # Strip_CAM size  57
    # Strip_CAM n fields 17

    return struct.pack( Strip_CAM_DK , dict['UTC_time'] , dict['originationStationID'] , dict['StripID'] , dict['RFID_ID'] , dict['StationType'] , dict['Latitude'] , dict['Longitude'] , dict['ConfidenceEllipse_semiMajor'] , dict['ConfidenceEllipse_semiMinor'] , dict['ConfidenceEllipse_semiMajorOrientation'] , dict['Altitude'] , dict['Heading'] , dict['Speed'] , dict['VehicleLength'] , dict['VehicleWidth'] , dict['LongitudinalAcceleration'] , dict['Lane_ID'] )  


 
def MAPEM_message_encode( dict ):
    # encode MAPEM_message from python dictonary to packed binary data
    MAPEM_message_DK = '!QIIBIiiiiBiBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB'
    # size of the serialized version of struct MAPEM_message
    # MAPEM_message size  243242
    # MAPEM_message n fields 21

    return struct.pack( MAPEM_message_DK , dict['UTC_time'] , dict['v2x_header_msgID'] , dict['v2x_header_originationStationID'] , dict['v2x_map_intersection_name'] , dict['v2x_map_intersection_id'] , dict['v2x_map_intersection_refLatitude'] , dict['v2x_map_intersection_refLongitude'] , dict['v2x_map_intersection_refAltitude'] , dict['v2x_map_intersection_laneWidth'] , dict['v2x_map_intersection_speedLimitType'] , dict['v2x_map_intersection_speedLimitValue'] ,  dict['v2x_map_intersection_LaneSet_ID'][0] , dict['v2x_map_intersection_LaneSet_ID'][1] , dict['v2x_map_intersection_LaneSet_ID'][2] , dict['v2x_map_intersection_LaneSet_ID'][3] , dict['v2x_map_intersection_LaneSet_ID'][4] , dict['v2x_map_intersection_LaneSet_ID'][5] , dict['v2x_map_intersection_LaneSet_ID'][6] , dict['v2x_map_intersection_LaneSet_ID'][7] , dict['v2x_map_intersection_LaneSet_ID'][8] , dict['v2x_map_intersection_LaneSet_ID'][9] , dict['v2x_map_intersection_LaneSet_ID'][10] , dict['v2x_map_intersection_LaneSet_ID'][11] , dict['v2x_map_intersection_LaneSet_ID'][12] , dict['v2x_map_intersection_LaneSet_ID'][13] , dict['v2x_map_intersection_LaneSet_ID'][14] , dict['v2x_map_intersection_LaneSet_ID'][15]  ,  dict['v2x_map_intersection_LaneSet_approach_ID'][0] , dict['v2x_map_intersection_LaneSet_approach_ID'][1] , dict['v2x_map_intersection_LaneSet_approach_ID'][2] , dict['v2x_map_intersection_LaneSet_approach_ID'][3] , dict['v2x_map_intersection_LaneSet_approach_ID'][4] , dict['v2x_map_intersection_LaneSet_approach_ID'][5] , dict['v2x_map_intersection_LaneSet_approach_ID'][6] , dict['v2x_map_intersection_LaneSet_approach_ID'][7] , dict['v2x_map_intersection_LaneSet_approach_ID'][8] , dict['v2x_map_intersection_LaneSet_approach_ID'][9] , dict['v2x_map_intersection_LaneSet_approach_ID'][10] , dict['v2x_map_intersection_LaneSet_approach_ID'][11] , dict['v2x_map_intersection_LaneSet_approach_ID'][12] , dict['v2x_map_intersection_LaneSet_approach_ID'][13] , dict['v2x_map_intersection_LaneSet_approach_ID'][14] , dict['v2x_map_intersection_LaneSet_approach_ID'][15]  ,  dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][0] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][1] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][2] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][3] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][4] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][5] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][6] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][7] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][8] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][9] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][10] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][11] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][12] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][13] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][14] , dict['v2x_map_intersection_LaneSet_laneAttributes_directionalUse'][15]  ,  dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][0] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][1] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][2] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][3] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][4] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][5] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][6] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][7] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][8] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][9] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][10] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][11] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][12] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][13] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][14] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][15] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][16] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][17] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][18] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][19] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][20] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][21] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][22] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][23] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][24] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][25] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][26] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][27] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][28] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][29] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][30] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][31] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][32] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][33] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][34] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][35] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][36] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][37] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][38] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][39] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][40] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][41] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][42] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][43] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][44] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][45] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][46] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][47] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][48] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][49] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][50] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][51] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][52] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][53] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][54] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][55] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][56] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][57] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][58] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][59] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][60] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][61] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][62] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][63] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][64] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][65] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][66] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][67] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][68] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][69] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][70] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][71] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][72] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][73] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][74] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][75] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][76] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][77] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][78] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][79] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][80] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][81] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][82] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][83] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][84] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][85] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][86] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][87] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][88] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][89] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][90] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][91] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][92] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][93] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][94] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][95] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][96] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][97] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][98] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][99] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][100] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][101] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][102] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][103] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][104] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][105] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][106] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][107] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][108] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][109] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][110] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][111] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][112] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][113] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][114] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][115] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][116] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][117] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][118] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][119] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][120] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][121] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][122] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][123] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][124] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][125] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][126] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][127] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][128] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][129] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][130] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][131] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][132] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][133] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][134] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][135] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][136] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][137] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][138] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][139] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][140] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][141] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][142] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][143] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][144] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][145] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][146] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][147] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][148] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][149] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][150] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][151] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][152] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][153] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][154] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][155] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][156] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][157] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][158] , dict['v2x_map_intersection_LaneSet_nodeList_Xoffset'][159]  ,  dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][0] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][1] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][2] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][3] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][4] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][5] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][6] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][7] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][8] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][9] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][10] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][11] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][12] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][13] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][14] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][15] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][16] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][17] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][18] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][19] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][20] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][21] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][22] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][23] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][24] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][25] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][26] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][27] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][28] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][29] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][30] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][31] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][32] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][33] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][34] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][35] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][36] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][37] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][38] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][39] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][40] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][41] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][42] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][43] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][44] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][45] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][46] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][47] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][48] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][49] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][50] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][51] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][52] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][53] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][54] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][55] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][56] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][57] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][58] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][59] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][60] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][61] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][62] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][63] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][64] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][65] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][66] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][67] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][68] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][69] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][70] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][71] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][72] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][73] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][74] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][75] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][76] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][77] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][78] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][79] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][80] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][81] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][82] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][83] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][84] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][85] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][86] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][87] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][88] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][89] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][90] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][91] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][92] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][93] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][94] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][95] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][96] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][97] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][98] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][99] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][100] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][101] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][102] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][103] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][104] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][105] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][106] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][107] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][108] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][109] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][110] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][111] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][112] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][113] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][114] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][115] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][116] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][117] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][118] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][119] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][120] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][121] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][122] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][123] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][124] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][125] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][126] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][127] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][128] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][129] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][130] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][131] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][132] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][133] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][134] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][135] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][136] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][137] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][138] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][139] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][140] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][141] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][142] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][143] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][144] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][145] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][146] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][147] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][148] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][149] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][150] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][151] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][152] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][153] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][154] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][155] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][156] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][157] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][158] , dict['v2x_map_intersection_LaneSet_nodeList_Yoffset'][159]  ,  dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][0] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][1] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][2] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][3] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][4] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][5] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][6] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][7] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][8] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][9] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][10] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][11] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][12] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][13] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][14] , dict['v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue'][15]  ,  dict['v2x_map_intersection_LaneType_ID'][0] , dict['v2x_map_intersection_LaneType_ID'][1] , dict['v2x_map_intersection_LaneType_ID'][2] , dict['v2x_map_intersection_LaneType_ID'][3] , dict['v2x_map_intersection_LaneType_ID'][4] , dict['v2x_map_intersection_LaneType_ID'][5] , dict['v2x_map_intersection_LaneType_ID'][6] , dict['v2x_map_intersection_LaneType_ID'][7] , dict['v2x_map_intersection_LaneType_ID'][8] , dict['v2x_map_intersection_LaneType_ID'][9] , dict['v2x_map_intersection_LaneType_ID'][10] , dict['v2x_map_intersection_LaneType_ID'][11] , dict['v2x_map_intersection_LaneType_ID'][12] , dict['v2x_map_intersection_LaneType_ID'][13] , dict['v2x_map_intersection_LaneType_ID'][14] , dict['v2x_map_intersection_LaneType_ID'][15]  ,  dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][0] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][1] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][2] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][3] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][4] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][5] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][6] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][7] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][8] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][9] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][10] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][11] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][12] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][13] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][14] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][15] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][16] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][17] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][18] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][19] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][20] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][21] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][22] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][23] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][24] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][25] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][26] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][27] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][28] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][29] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][30] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][31] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][32] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][33] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][34] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][35] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][36] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][37] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][38] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][39] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][40] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][41] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][42] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][43] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][44] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][45] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][46] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][47] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][48] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][49] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][50] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][51] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][52] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][53] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][54] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][55] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][56] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][57] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][58] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][59] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][60] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][61] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][62] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][63] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][64] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][65] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][66] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][67] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][68] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][69] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][70] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][71] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][72] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][73] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][74] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][75] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][76] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][77] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][78] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][79] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][80] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][81] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][82] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][83] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][84] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][85] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][86] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][87] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][88] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][89] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][90] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][91] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][92] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][93] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][94] , dict['v2x_map_intersection_ConnectingLane_allowedManeuvers'][95]  ,  dict['v2x_map_intersection_LaneSet_connectingLaneID'][0] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][1] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][2] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][3] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][4] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][5] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][6] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][7] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][8] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][9] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][10] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][11] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][12] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][13] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][14] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][15] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][16] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][17] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][18] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][19] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][20] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][21] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][22] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][23] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][24] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][25] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][26] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][27] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][28] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][29] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][30] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][31] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][32] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][33] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][34] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][35] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][36] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][37] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][38] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][39] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][40] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][41] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][42] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][43] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][44] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][45] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][46] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][47] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][48] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][49] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][50] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][51] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][52] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][53] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][54] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][55] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][56] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][57] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][58] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][59] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][60] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][61] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][62] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][63] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][64] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][65] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][66] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][67] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][68] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][69] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][70] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][71] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][72] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][73] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][74] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][75] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][76] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][77] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][78] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][79] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][80] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][81] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][82] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][83] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][84] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][85] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][86] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][87] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][88] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][89] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][90] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][91] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][92] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][93] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][94] , dict['v2x_map_intersection_LaneSet_connectingLaneID'][95]  ,  dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][0] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][1] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][2] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][3] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][4] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][5] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][6] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][7] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][8] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][9] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][10] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][11] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][12] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][13] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][14] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][15] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][16] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][17] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][18] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][19] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][20] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][21] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][22] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][23] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][24] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][25] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][26] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][27] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][28] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][29] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][30] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][31] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][32] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][33] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][34] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][35] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][36] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][37] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][38] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][39] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][40] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][41] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][42] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][43] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][44] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][45] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][46] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][47] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][48] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][49] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][50] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][51] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][52] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][53] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][54] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][55] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][56] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][57] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][58] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][59] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][60] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][61] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][62] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][63] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][64] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][65] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][66] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][67] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][68] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][69] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][70] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][71] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][72] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][73] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][74] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][75] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][76] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][77] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][78] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][79] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][80] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][81] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][82] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][83] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][84] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][85] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][86] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][87] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][88] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][89] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][90] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][91] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][92] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][93] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][94] , dict['v2x_map_intersection_LaneSet_connectingLaneSignalGroup'][95]  )  


 
def HMI_activations_encode( dict ):
    # encode HMI_activations from python dictonary to packed binary data
    HMI_activations_DK = '!II'
    # size of the serialized version of struct HMI_activations
    # HMI_activations size  8
    # HMI_activations n fields 2

    return struct.pack( HMI_activations_DK , dict['UTC_time'] , dict['apps_active'] )  


 
def HMIinputsByApp_active_encode( dict ):
    # encode HMIinputsByApp_active from python dictonary to packed binary data
    HMIinputsByApp_active_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp_active
    # HMIinputsByApp_active size  46
    # HMIinputsByApp_active n fields 9

    return struct.pack( HMIinputsByApp_active_DK , dict['UTC_time'] , dict['OutputID'] , dict['StationID'] , dict['WarningLevel'] , dict['J0f'] , dict['TargetDistancef'] , dict['TargetSpeedf'] , dict['TargetClassf'] , dict['TargetComingDirection'] )  


 
def HMIinputsByApp_encode( dict ):
    # encode HMIinputsByApp from python dictonary to packed binary data
    HMIinputsByApp_DK = '!QIIBdddiB'
    # size of the serialized version of struct HMIinputsByApp
    # HMIinputsByApp size  46
    # HMIinputsByApp n fields 9

    return struct.pack( HMIinputsByApp_DK , dict['UTC_time'] , dict['OutputID'] , dict['StationID'] , dict['WarningLevel'] , dict['J0f'] , dict['TargetDistancef'] , dict['TargetSpeedf'] , dict['TargetClassf'] , dict['TargetComingDirection'] )  


 
def FirstTrajectoryMotorPrimitivesParameters_encode( dict ):
    # encode FirstTrajectoryMotorPrimitivesParameters from python dictonary to packed binary data
    FirstTrajectoryMotorPrimitivesParameters_DK = '!Qidddddddddddddddddddddd'
    # size of the serialized version of struct FirstTrajectoryMotorPrimitivesParameters
    # FirstTrajectoryMotorPrimitivesParameters size  188
    # FirstTrajectoryMotorPrimitivesParameters n fields 24

    return struct.pack( FirstTrajectoryMotorPrimitivesParameters_DK , dict['UTC_time'] , dict['OutputID'] , dict['T0'] , dict['V0'] , dict['A0'] , dict['T1f'] , dict['J0f'] , dict['S0f'] , dict['Cr0f'] , dict['T2f'] , dict['J1f'] , dict['S1f'] , dict['Cr1f'] , dict['Sn0'] , dict['Alpha0'] , dict['Delta0'] , dict['T1nf'] , dict['Jdelta0f'] , dict['Sdelta0f'] , dict['Crdelta0f'] , dict['T2nf'] , dict['Jdelta1f'] , dict['Sdelta1f'] , dict['Crdelta1f'] )  


 
def ManouevreTypes_encode( dict ):
    # encode ManouevreTypes from python dictonary to packed binary data
    ManouevreTypes_DK = '!QiBBBB'
    # size of the serialized version of struct ManouevreTypes
    # ManouevreTypes size  16
    # ManouevreTypes n fields 6

    return struct.pack( ManouevreTypes_DK , dict['UTC_time'] , dict['OutputID'] , dict['FirstManoeuverTypeLong'] , dict['FirstManoeuverTypeLat'] , dict['SecondManoeuverTypeLong'] , dict['SecondManoeuverTypeLat'] )  


 
def StrainGauge_encode( dict ):
    # encode StrainGauge from python dictonary to packed binary data
    StrainGauge_DK = '!QIiddd'
    # size of the serialized version of struct StrainGauge
    # StrainGauge size  40
    # StrainGauge n fields 6

    return struct.pack( StrainGauge_DK , dict['UTC_time'] , dict['StripID'] , dict['Strain_gauge_Sensor_ID'] , dict['Strain_gauge_Amplitude'] , dict['Strain_gauge_event_time'] , dict['Exponential_decay'] )  


 
def AutomationLevel_encode( dict ):
    # encode AutomationLevel from python dictonary to packed binary data
    AutomationLevel_DK = '!QB'
    # size of the serialized version of struct AutomationLevel
    # AutomationLevel size  9
    # AutomationLevel n fields 2

    return struct.pack( AutomationLevel_DK , dict['UTC_time'] , dict['Automation_Level'] )  


 
def ParkingStatus_encode( dict ):
    # encode ParkingStatus from python dictonary to packed binary data
    ParkingStatus_DK = '!QiIIIIIIIIIII'
    # size of the serialized version of struct ParkingStatus
    # ParkingStatus size  416
    # ParkingStatus n fields 4

    return struct.pack( ParkingStatus_DK , dict['UTC_time'] , dict['OutputID'] ,  dict['IDs_free_patkings'][0] , dict['IDs_free_patkings'][1] , dict['IDs_free_patkings'][2] , dict['IDs_free_patkings'][3] , dict['IDs_free_patkings'][4] , dict['IDs_free_patkings'][5] , dict['IDs_free_patkings'][6] , dict['IDs_free_patkings'][7] , dict['IDs_free_patkings'][8] , dict['IDs_free_patkings'][9]  , dict['Number_of_free_parkings'] )  


 
def ParkingEvent_encode( dict ):
    # encode ParkingEvent from python dictonary to packed binary data
    ParkingEvent_DK = '!QiIIIB'
    # size of the serialized version of struct ParkingEvent
    # ParkingEvent size  25
    # ParkingEvent n fields 6

    return struct.pack( ParkingEvent_DK , dict['UTC_time'] , dict['OutputID'] , dict['RSB_ID'] , dict['RFID_ID'] , dict['StripID'] , dict['Event'] )  


 
def ParkingOutput_encode( dict ):
    # encode ParkingOutput from python dictonary to packed binary data
    ParkingOutput_DK = '!QiIII'
    # size of the serialized version of struct ParkingOutput
    # ParkingOutput size  24
    # ParkingOutput n fields 5

    return struct.pack( ParkingOutput_DK , dict['UTC_time'] , dict['OutputID'] , dict['RFID_ID'] , dict['Payment_Amount'] , dict['Payment_and_parking_status'] )  


 
def VirtualToll_input_encode( dict ):
    # encode VirtualToll_input from python dictonary to packed binary data
    VirtualToll_input_DK = '!QBiiiIII'
    # size of the serialized version of struct VirtualToll_input
    # VirtualToll_input size  33
    # VirtualToll_input n fields 8

    return struct.pack( VirtualToll_input_DK , dict['UTC_time'] , dict['StationType'] , dict['position_latitude'] , dict['position_longitude'] , dict['virtual_gate_distance'] , dict['StripID'] , dict['RSB_ID'] , dict['RFID_ID'] )  


 
def VirtualToll_output_encode( dict ):
    # encode VirtualToll_output from python dictonary to packed binary data
    VirtualToll_output_DK = '!QIiIB'
    # size of the serialized version of struct VirtualToll_output
    # VirtualToll_output size  21
    # VirtualToll_output n fields 5

    return struct.pack( VirtualToll_output_DK , dict['UTC_time'] , dict['RFID_ID'] , dict['virtual_gate_distance'] , dict['payment_amount'] , dict['payment_confirmation'] )  


 
def EnvironmentData_encode( dict ):
    # encode EnvironmentData from python dictonary to packed binary data
    EnvironmentData_DK = '!IIIBBiBIIBBBB'
    # size of the serialized version of struct EnvironmentData
    # EnvironmentData size  31
    # EnvironmentData n fields 13

    return struct.pack( EnvironmentData_DK , dict['RSB_ID'] , dict['StripID'] , dict['Fog'] , dict['Road_type'] , dict['ice'] , dict['temperature'] , dict['gas_type'] , dict['gas_presence'] , dict['humidity'] , dict['Reported_surface_state'] , dict['water_layer'] , dict['show_layer'] , dict['ice_layer'] )  


 
def SetCodriverParameters_encode( dict ):
    # encode SetCodriverParameters from python dictonary to packed binary data
    SetCodriverParameters_DK = '!Qdddddd'
    # size of the serialized version of struct SetCodriverParameters
    # SetCodriverParameters size  56
    # SetCodriverParameters n fields 7

    return struct.pack( SetCodriverParameters_DK , dict['UTC_time'] , dict['jerk_lower'] , dict['jerk_higher'] , dict['reaction_time'] , dict['p1'] , dict['p2'] , dict['p3'] )  


 

# MQTT specific utilities

# generate topics

def HostVehicle_MQTT_topic( dict ):
    # from HostVehicle from python dictonary to mqtt topic
        return 'SafeStrip/HostVehicle'

def CAM_message_MQTT_topic( dict ):
    # from CAM_message from python dictonary to mqtt topic
        return 'SafeStrip/CAM/' + str(dict['v2x_cam_header_originationStationID'])

def DENM_message_MQTT_topic( dict ):
    # from DENM_message from python dictonary to mqtt topic
        return 'SafeStrip/DENM/' + str(dict['v2x_header_originationStationID'])

def Strip_CAM_MQTT_topic( dict ):
    # from Strip_CAM from python dictonary to mqtt topic
        return 'SafeStrip/Strip_CAM/' + str(dict['originationStationID'])

def MAPEM_message_MQTT_topic( dict ):
    # from MAPEM_message from python dictonary to mqtt topic
        return 'SafeStrip/MAPEM/' + str(dict['v2x_header_originationStationID'])

def HMI_activations_MQTT_topic( dict ):
    # from HMI_activations from python dictonary to mqtt topic
        return 'SafeStrip/HMI_activations'

def HMIinputsByApp_active_MQTT_topic( dict ):
    # from HMIinputsByApp_active from python dictonary to mqtt topic
        return 'SafeStrip/HMIinputsByApp_active/' + str(dict['StationID'])

def HMIinputsByApp_MQTT_topic( dict ):
    # from HMIinputsByApp from python dictonary to mqtt topic
        return 'SafeStrip/HMIinputsByApp/' + str(dict['OutputID'])

def FirstTrajectoryMotorPrimitivesParameters_MQTT_topic( dict ):
    # from FirstTrajectoryMotorPrimitivesParameters from python dictonary to mqtt topic
        return 'SafeStrip/FirstTrajectoryMotorPrimitivesParameters/' + str(dict['OutputID'])

def ManouevreTypes_MQTT_topic( dict ):
    # from ManouevreTypes from python dictonary to mqtt topic
        return 'SafeStrip/ManoeuvreTypes/' + str(dict['OutputID'])

def StrainGauge_MQTT_topic( dict ):
    # from StrainGauge from python dictonary to mqtt topic
        return 'SafeStrip/StrainGauge/' + str(dict['StripID'])

def AutomationLevel_MQTT_topic( dict ):
    # from AutomationLevel from python dictonary to mqtt topic
        return 'SafeStrip/AutomationLevel'

def ParkingStatus_MQTT_topic( dict ):
    # from ParkingStatus from python dictonary to mqtt topic
        return 'SafeStrip/ParkingStatus'

def ParkingEvent_MQTT_topic( dict ):
    # from ParkingEvent from python dictonary to mqtt topic
        return 'SafeStrip/ParkingEvent/' + str(dict['StripID'])

def ParkingOutput_MQTT_topic( dict ):
    # from ParkingOutput from python dictonary to mqtt topic
        return 'SafeStrip/ParkingOutput/' + str(dict['RFID_ID'])

def VirtualToll_input_MQTT_topic( dict ):
    # from VirtualToll_input from python dictonary to mqtt topic
        return 'SafeStrip/VirtualToll_input/' + str(dict['RFID_ID'])

def VirtualToll_output_MQTT_topic( dict ):
    # from VirtualToll_output from python dictonary to mqtt topic
        return 'SafeStrip/VirtualToll_output/' + str(dict['RFID_ID'])

def EnvironmentData_MQTT_topic( dict ):
    # from EnvironmentData from python dictonary to mqtt topic
        return 'SafeStrip/EnvironmentData/' + str(dict['RSB_ID'])

def SetCodriverParameters_MQTT_topic( dict ):
    # from SetCodriverParameters from python dictonary to mqtt topic
        return 'SafeStrip/SetCodriverParameters'


# compare topics

def HostVehicle_MQTT_topic_compare( topic ):
    # return true if the topic is the one of HostVehicle
        return 'SafeStrip/HostVehicle' in topic

def CAM_message_MQTT_topic_compare( topic ):
    # return true if the topic is the one of CAM_message
        return 'SafeStrip/CAM' in topic

def DENM_message_MQTT_topic_compare( topic ):
    # return true if the topic is the one of DENM_message
        return 'SafeStrip/DENM' in topic

def Strip_CAM_MQTT_topic_compare( topic ):
    # return true if the topic is the one of Strip_CAM
        return 'SafeStrip/Strip_CAM' in topic

def MAPEM_message_MQTT_topic_compare( topic ):
    # return true if the topic is the one of MAPEM_message
        return 'SafeStrip/MAPEM' in topic

def HMI_activations_MQTT_topic_compare( topic ):
    # return true if the topic is the one of HMI_activations
        return 'SafeStrip/HMI_activations' in topic

def HMIinputsByApp_active_MQTT_topic_compare( topic ):
    # return true if the topic is the one of HMIinputsByApp_active
        return 'SafeStrip/HMIinputsByApp_active' in topic

def HMIinputsByApp_MQTT_topic_compare( topic ):
    # return true if the topic is the one of HMIinputsByApp
        return 'SafeStrip/HMIinputsByApp' in topic

def FirstTrajectoryMotorPrimitivesParameters_MQTT_topic_compare( topic ):
    # return true if the topic is the one of FirstTrajectoryMotorPrimitivesParameters
        return 'SafeStrip/FirstTrajectoryMotorPrimitivesParameters' in topic

def ManouevreTypes_MQTT_topic_compare( topic ):
    # return true if the topic is the one of ManouevreTypes
        return 'SafeStrip/ManoeuvreTypes' in topic

def StrainGauge_MQTT_topic_compare( topic ):
    # return true if the topic is the one of StrainGauge
        return 'SafeStrip/StrainGauge' in topic

def AutomationLevel_MQTT_topic_compare( topic ):
    # return true if the topic is the one of AutomationLevel
        return 'SafeStrip/AutomationLevel' in topic

def ParkingStatus_MQTT_topic_compare( topic ):
    # return true if the topic is the one of ParkingStatus
        return 'SafeStrip/ParkingStatus' in topic

def ParkingEvent_MQTT_topic_compare( topic ):
    # return true if the topic is the one of ParkingEvent
        return 'SafeStrip/ParkingEvent' in topic

def ParkingOutput_MQTT_topic_compare( topic ):
    # return true if the topic is the one of ParkingOutput
        return 'SafeStrip/ParkingOutput' in topic

def VirtualToll_input_MQTT_topic_compare( topic ):
    # return true if the topic is the one of VirtualToll_input
        return 'SafeStrip/VirtualToll_input' in topic

def VirtualToll_output_MQTT_topic_compare( topic ):
    # return true if the topic is the one of VirtualToll_output
        return 'SafeStrip/VirtualToll_output' in topic

def EnvironmentData_MQTT_topic_compare( topic ):
    # return true if the topic is the one of EnvironmentData
        return 'SafeStrip/EnvironmentData' in topic

def SetCodriverParameters_MQTT_topic_compare( topic ):
    # return true if the topic is the one of SetCodriverParameters
        return 'SafeStrip/SetCodriverParameters' in topic


# decode from payload and topic

def all_MQTT_decoding( topic , payload ):
    # return the proper decoded dictionary based on the base topic
    dict = {}
    if not topic: # null string return false
        print('empty topic')
    elif HostVehicle_MQTT_topic_compare( topic ):
        dict = HostVehicle_decode( payload )
    elif CAM_message_MQTT_topic_compare( topic ):
        dict = CAM_message_decode( payload )
    elif DENM_message_MQTT_topic_compare( topic ):
        dict = DENM_message_decode( payload )
    elif Strip_CAM_MQTT_topic_compare( topic ):
        dict = Strip_CAM_decode( payload )
    elif MAPEM_message_MQTT_topic_compare( topic ):
        dict = MAPEM_message_decode( payload )
    elif HMI_activations_MQTT_topic_compare( topic ):
        dict = HMI_activations_decode( payload )
    elif HMIinputsByApp_active_MQTT_topic_compare( topic ):
        dict = HMIinputsByApp_active_decode( payload )
    elif HMIinputsByApp_MQTT_topic_compare( topic ):
        dict = HMIinputsByApp_decode( payload )
    elif FirstTrajectoryMotorPrimitivesParameters_MQTT_topic_compare( topic ):
        dict = FirstTrajectoryMotorPrimitivesParameters_decode( payload )
    elif ManouevreTypes_MQTT_topic_compare( topic ):
        dict = ManouevreTypes_decode( payload )
    elif StrainGauge_MQTT_topic_compare( topic ):
        dict = StrainGauge_decode( payload )
    elif AutomationLevel_MQTT_topic_compare( topic ):
        dict = AutomationLevel_decode( payload )
    elif ParkingStatus_MQTT_topic_compare( topic ):
        dict = ParkingStatus_decode( payload )
    elif ParkingEvent_MQTT_topic_compare( topic ):
        dict = ParkingEvent_decode( payload )
    elif ParkingOutput_MQTT_topic_compare( topic ):
        dict = ParkingOutput_decode( payload )
    elif VirtualToll_input_MQTT_topic_compare( topic ):
        dict = VirtualToll_input_decode( payload )
    elif VirtualToll_output_MQTT_topic_compare( topic ):
        dict = VirtualToll_output_decode( payload )
    elif EnvironmentData_MQTT_topic_compare( topic ):
        dict = EnvironmentData_decode( payload )
    elif SetCodriverParameters_MQTT_topic_compare( topic ):
        dict = SetCodriverParameters_decode( payload )
    else:
        print('unmanaged topic:' + topic + ' - message discarderd')
    return dict


def all_MQTT_decoding_true_values( topic , payload ):
    # return the proper decoded dictionary based on the base topic
    dict = {}
    if not topic: # null string return false
        print('empty topic')
    elif HostVehicle_MQTT_topic_compare( topic ):
        dict = HostVehicle_decode_true_values( payload )
    elif CAM_message_MQTT_topic_compare( topic ):
        dict = CAM_message_decode_true_values( payload )
    elif DENM_message_MQTT_topic_compare( topic ):
        dict = DENM_message_decode_true_values( payload )
    elif Strip_CAM_MQTT_topic_compare( topic ):
        dict = Strip_CAM_decode_true_values( payload )
    elif MAPEM_message_MQTT_topic_compare( topic ):
        dict = MAPEM_message_decode_true_values( payload )
    elif HMI_activations_MQTT_topic_compare( topic ):
        dict = HMI_activations_decode_true_values( payload )
    elif HMIinputsByApp_active_MQTT_topic_compare( topic ):
        dict = HMIinputsByApp_active_decode_true_values( payload )
    elif HMIinputsByApp_MQTT_topic_compare( topic ):
        dict = HMIinputsByApp_decode_true_values( payload )
    elif FirstTrajectoryMotorPrimitivesParameters_MQTT_topic_compare( topic ):
        dict = FirstTrajectoryMotorPrimitivesParameters_decode_true_values( payload )
    elif ManouevreTypes_MQTT_topic_compare( topic ):
        dict = ManouevreTypes_decode_true_values( payload )
    elif StrainGauge_MQTT_topic_compare( topic ):
        dict = StrainGauge_decode_true_values( payload )
    elif AutomationLevel_MQTT_topic_compare( topic ):
        dict = AutomationLevel_decode_true_values( payload )
    elif ParkingStatus_MQTT_topic_compare( topic ):
        dict = ParkingStatus_decode_true_values( payload )
    elif ParkingEvent_MQTT_topic_compare( topic ):
        dict = ParkingEvent_decode_true_values( payload )
    elif ParkingOutput_MQTT_topic_compare( topic ):
        dict = ParkingOutput_decode_true_values( payload )
    elif VirtualToll_input_MQTT_topic_compare( topic ):
        dict = VirtualToll_input_decode_true_values( payload )
    elif VirtualToll_output_MQTT_topic_compare( topic ):
        dict = VirtualToll_output_decode_true_values( payload )
    elif EnvironmentData_MQTT_topic_compare( topic ):
        dict = EnvironmentData_decode_true_values( payload )
    elif SetCodriverParameters_MQTT_topic_compare( topic ):
        dict = SetCodriverParameters_decode_true_values( payload )
    else:
        print('unmanaged topic:' + topic + ' - message discarderd')
    return dict


