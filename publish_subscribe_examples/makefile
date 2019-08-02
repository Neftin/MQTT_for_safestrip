
GEN_FOLDER_REL   = ../generated#      Folder where the generated headers are (ex: safestrip.hpp)
MOSQUITTO        = -L/usr/local/lib -lmosquitto -lmosquittopp
SSL_FOLDER       = /usr/local/opt/openssl/lib/libssl.a  /usr/local/opt/openssl/lib/libcrypto.a # command for SSL (found if you try to type brew link --force openssl)
DEBUG_FLAG       = -DDEBUG#        Default with debug to print structures

all: test_publish_remote test_subscriber_remote test_publish test_subscriber test_publish_virtual_DENM

remote_test : test_publish_remote test_subscriber_remote

local_test : test_publish test_subscriber # default targets required


test_publish_remote: test_publish_remote.cpp
	g++ -I$(GEN_FOLDER_REL) -Wall $(DEBUG_FLAG) $< $(GEN_FOLDER_REL)/*.c* $(MOSQUITTO) -o $@
test_subscriber_remote: test_subscriber_remote.cpp
	g++ -I$(GEN_FOLDER_REL) -Wall $(DEBUG_FLAG) $< $(GEN_FOLDER_REL)/*.c* $(MOSQUITTO) -o $@

test_publish: test_publish.cpp
	g++ -I$(GEN_FOLDER_REL) -Wall $(DEBUG_FLAG) $< $(GEN_FOLDER_REL)/*.c* $(MOSQUITTO) -o $@
test_subscriber: test_subscriber.cpp
	g++ -I$(GEN_FOLDER_REL) -Wall $(DEBUG_FLAG) $< $(GEN_FOLDER_REL)/*.c* $(MOSQUITTO) -o $@

test_publish_virtual_DENM: test_publish_virtual_DENM.cpp
	g++ -I$(GEN_FOLDER_REL) -Wall $(DEBUG_FLAG) $< $(GEN_FOLDER_REL)/*.c* $(MOSQUITTO) -o $@

clean:
	rm -f test_publish test_subscriber test_publish_remote test_subscriber_remote test_publish_virtual_DENM





#Turbo comments
# g++                     : obvious
#  -Igenerated            : include "generated" folder -I<folder> this includes the folders for the path when you use the "" in include
#  -Wall                  : all warnings activated
#  $(DEBUG_FLAG)          : empty if non debug, -DDEBUG define the compiler varibale "DEBUG"
#  test_publish.cpp       : source file
#  $(GEN_FOLDER_REL)/*.c* : include all the code to compile from other files
#  -L$(MOSQUITTO_FOLDER)  : include other folders for libraries
#  -lmosquittopp          : -l<library>
#  -lmosquitto            : -l<library>
#  -o $@ : generate output file from name