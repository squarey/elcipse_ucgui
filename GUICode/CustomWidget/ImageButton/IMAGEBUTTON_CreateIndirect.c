

#include "IMAGEBUTTON.h"


#if GUI_WINSUPPORT && IMAGEBUTTON_SUPPORT
IMAGEBUTTON_Handle IMAGEBUTTON_CreateIndirect(const GUI_WIDGET_CREATE_INFO* pCreateInfo, WM_HWIN hWinParent, I32 x0, I32 y0, WM_CALLBACK* cb) 
{
  IMAGEBUTTON_Handle  hThis;
  GUI_USE_PARA(cb);
  hThis = IMAGEBUTTON_CreateEx(pCreateInfo->x0 + x0, pCreateInfo->y0 + y0, pCreateInfo->xSize, pCreateInfo->ySize,
                          hWinParent, pCreateInfo->Flags, pCreateInfo->Flags, pCreateInfo->Id);
  return hThis;
}

#else  /* avoid empty object files */
  void IMAGEBUTTON_CreateIndirect_C(void) {}
#endif

