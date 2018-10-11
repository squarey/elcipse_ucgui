/*
 * ucMain.h
 *
 *  Created on: 2018年5月11日
 *      Author: Administrator
 */

#ifndef _GUI_MAIN_H_
#define _GUI_MAIN_H_


#include "GUI.h"
#include "DIALOG.h"

#define 	PRJ_WATERHEATER	0
#define 	PRJ_PIANO		1

#define		PRJ_SELECT	PRJ_PIANO

#if (PRJ_SELECT == PRJ_WATERHEATER)
.
#define ID_TITLE_BAR_BASE			(GUI_ID_USER + 0)
#define ID_HOME_PAGE_BASE			(GUI_ID_USER + 50)
#define ID_TIMER_PAGE_BASE			(GUI_ID_USER + 100)
#define ID_KITCHEN_PAGE_BASE		(GUI_ID_USER + 150)
#define ID_BATHROOM_PAGE_BASE		(GUI_ID_USER + 200)
#define ID_BATHTUB_PAGE_BASE		(GUI_ID_USER + 250)
#define ID_ENERGY_PAGE_BASE			(GUI_ID_USER + 300)
#define ID_PASSWORD_PAGE_BASE		(GUI_ID_USER + 350)
#define ID_LOCKSCREEN_PAGE_BASE		(GUI_ID_USER + 400)
#define ID_DIALOG_PAGE_BASE			(GUI_ID_USER + 450)
#define ID_SETTING_PAGE_BASE		(GUI_ID_USER + 550)
#define ID_SETTING_PAGE_BASE2		(GUI_ID_USER + 600)
#define ID_BOOT_PAGE				(GUI_ID_USER + 650)
#define ID_TIME_SET_PAGE_BASE		(GUI_ID_USER + 700)


#define TITLE_BAR_HEIGHT			70

#elif (PRJ_SELECT == PRJ_PIANO)

#include "Bitmap.h"
#include "SettingInfo.h"
#include "HoodCom.h"

#define 		COMPILE_ON_C600						0

#define ID_PAGE_TITLE_BAR_BASE			(GUI_ID_USER + 0)
#define ID_PAGE_MAIN_BASE				(GUI_ID_USER + 50)
#define ID_PAGE_MENU_BAR_BASE			(GUI_ID_USER + 100)
#define ID_PAGE_SET_BASE				(GUI_ID_USER + 150)
#define ID_PAGE_DELAY_SET_BASE			(GUI_ID_USER + 200)
#define ID_PAGE_TIMING_AIR_BASE			(GUI_ID_USER + 220)
#define ID_PAGE_COOKER_TIME_BASE		(GUI_ID_USER + 240)
#define ID_PAGE_TIME_SET_BASE			(GUI_ID_USER + 260)
#define ID_PAGE_BRIGHTNESS_SET_BASE		(GUI_ID_USER + 280)
#define ID_PAGE_WIFI_BASE				(GUI_ID_USER + 300)
#define ID_PAGE_WIFI_PASSWORD_BASSE		(GUI_ID_USER + 320)


#define DEF_TITLE_BAR_HEIGHT		70
#define DEF_PAGE_WIDTH				1000
#define DEF_MENU_BAR_HEIGHT			120
#define DEF_MAIN_PAGE_HEIGH			(600 - 70 - 120)
#define DEF_DIALOG_WIDTH			400
#define DEF_DIALOG_HEIGHT			380

#define ID_MSG_WIN_LIST_CHANGE		(WM_USER + 1)
#define ID_MSG_QUEUE_ADD_ITEM		(WM_USER + 2)
#define ID_MSG_NOTIFY_SET_SSID		(WM_USER + 3)
#define ID_MSG_TO_CONNECT_NEW_AP	(WM_USER + 4)
#define ID_MSG_TO_SCAN_AP			(WM_USER + 5)

#endif

#endif /* UCGUI_MAIN_H_ */
