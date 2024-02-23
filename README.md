This is a DXE which enables USB power on some Qualcomm SoCs without UsbPwrCtrlDxe in XBL (though seems like it may work even with UsbPwrCtrlDxe, but keep in mind it is really unlikely to happen). Tested on SDM636 (so should work on 630 and 660). Strongly recommended to not to connect any power while this is used, as it is dangerous and may burn your PMIC/USB port.

Keep in mind you won't be able to compile it without a proprietary file called "EFIPmicUsb.h" (if you really wish to-you can find it in some leaked source code for 660 in /QcomPkg/Include
/Protocol). Instead of doing that you can just download a release.

Deprecated, use at your own risk.
