// made by N1kr0ks, edited for SDM660 by aistop

#include <Library/PcdLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Protocol/EFIPmicUsb.h>

EFI_STATUS
EFIAPI
UsbPwr (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable)
{
  EFI_STATUS          Status;
  EFI_QCOM_PMIC_USB_PROTOCOL *gPmicUsbProtocol;

  Status = gBS->LocateProtocol(&gQcomPmicUsbProtocolGuid, NULL, (VOID *)&gPmicUsbProtocol);
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Failed to locate PMIC USB Protocol! Status = %r\n", Status));
    goto exit;
  }

  Status = gPmicUsbProtocol->EnableOtg(TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Failed to enable OTG! Status = %r\n", Status));
    goto exit;
  }

exit:
  return Status;
}
