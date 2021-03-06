/*
*********************************************************************************************************
*                                             uC/GUI V3.98
*                        Universal graphic software for embedded applications
*
*                       (c) Copyright 2002, Micrium Inc., Weston, FL
*                       (c) Copyright 2002, SEGGER Microcontroller Systeme GmbH
*
*              �C/GUI is protected by international copyright laws. Knowledge of the
*              source code may not be used to write a similar product. This file may
*              only be used in accordance with a license and should not be redistributed
*              in any way. We appreciate your understanding and fairness.
*
----------------------------------------------------------------------
File        : PROGBAR.h
Purpose     : Progressbar include
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef PROGBAR_H        /* Avoid multiple inclusion  */
#define PROGBAR_H

#include "WM.h"
#include "DIALOG_Intern.h"      /* Req. for Create indirect data structure */

#if GUI_WINSUPPORT && PROGBAR_SUPPORT

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
/*********************************************************************
*
*       Create flags
*/
#define PROGBAR_CF_HORIZONTAL (0 << 0)
#define PROGBAR_CF_VERTICAL   (1 << 0)

#define PROGBAR_STYLE_RECT		0x00
#define PROGBAR_STYLE_CIRCLE	0x01

/*********************************************************************
*
*       Types
*
**********************************************************************
*/
typedef WM_HMEM PROGBAR_Handle;


/*********************************************************************
*
*       Create functions
*
**********************************************************************
*/

PROGBAR_Handle PROGBAR_Create        (I32 x0, I32 y0, I32 xsize, I32 ysize, I32 Flags);
PROGBAR_Handle PROGBAR_CreateAsChild (I32 x0, I32 y0, I32 xsize, I32 ysize, WM_HWIN hParent, I32 Id, I32 Flags);
PROGBAR_Handle PROGBAR_CreateIndirect(const GUI_WIDGET_CREATE_INFO* pCreateInfo, WM_HWIN hWinParent, I32 x0, I32 y0, WM_CALLBACK* cb);
PROGBAR_Handle PROGBAR_CreateEx      (I32 x0, I32 y0, I32 xsize, I32 ysize, WM_HWIN hParent,
                                      I32 WinFlags, I32 ExFlags, I32 Id);
/*********************************************************************
*
*       The callback ...
*
* Do not call it directly ! It is only to be used from within an
* overwritten callback.
*/
void PROGBAR_Callback(WM_MESSAGE * pMsg);

/*********************************************************************
*
*       Standard member functions
*
**********************************************************************
*/

#define PROGBAR_EnableMemdev(hObj)  WM_EnableMemdev(hObj)
#define PROGBAR_DisableMemdev(hObj) WM_DisableMemdev(hObj)
#define PROGBAR_Delete(hObj)        WM_DeleteWindow(hObj)
#define PROGBAR_Paint(hObj)         WM_Paint(hObj)

/*********************************************************************
*
*       Individual member functions
*
**********************************************************************
*/

void            PROGBAR_SetBarColor (PROGBAR_Handle hObj, U32 index, GUI_COLOR color);
void            PROGBAR_SetFont     (PROGBAR_Handle hObj, const GUI_FONT GUI_UNI_PTR * pfont);
void            PROGBAR_SetMinMax   (PROGBAR_Handle hObj, I32 Min, I32 Max);
void            PROGBAR_SetText     (PROGBAR_Handle hObj, const char* s);
void            PROGBAR_SetTextAlign(PROGBAR_Handle hObj, I32 Align);
void            PROGBAR_SetTextColor(PROGBAR_Handle hObj, U32 index, GUI_COLOR color);
void            PROGBAR_SetTextPos  (PROGBAR_Handle hObj, I32 XOff, I32 YOff);
void            PROGBAR_SetValue    (PROGBAR_Handle hObj, I32 v);
void 			PROGBAR_SetStyle	(PROGBAR_Handle hObj, U8 Style);

#if defined(__cplusplus)
  }
#endif

#endif   /* GUI_WINSUPPORT */
#endif   /* PROGBAR_H */
	 	 			 		    	 				 	  			   	 	 	 	 	 	  	  	      	   		 	 	 		  		  	 		 	  	  			     			       	   	 			  		    	 	     	 				  	 					 	 			   	  	  			 				 		 	 	 			     			 
