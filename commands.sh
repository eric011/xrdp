#!/bin/sh
yes | cp -rf xrdp/.libs/rdpp /usr/local/rdpp/
yes | cp -rf rdp/.libs/librdp.so* libxrdp/.libs/librdpp.so* common/.libs/libcommon.so* freerdp1/.libs/libxrdpfreerdp1.so* /usr/local/lib/xrdp/
