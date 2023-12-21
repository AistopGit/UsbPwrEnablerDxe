This is a DXE which enables USB power on some Qualcomm SoCs without UsbPwrCtrlDxe. Tested on SDM636 (so should work on 630 and 660).
Keep in mind you won't be able to compile it without a proprietary file called "EFIPmicUsb.h" (if you really wish to-you can find it in some leaked source code for 660 in /QcomPkg/Include
/Protocol). Instead of that you can just download a release.
