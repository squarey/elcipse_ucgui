/*
 * PageTitleBar.c
 *
 *  Created on: 2018年9月19日
 *      Author: Administrator
 */


#include "PageTitleBar.h"
#include "PageMainList.h"
#include "DialogTimeSet.h"

#define ID_WINDOW_TITLE_BAR			(ID_PAGE_TITLE_BAR_BASE + 0)
#define ID_TITLE_LOGO				(ID_PAGE_TITLE_BAR_BASE + 1)
#define ID_TITLE_HOME_TEXT			(ID_PAGE_TITLE_BAR_BASE + 2)
#define ID_TITLE_SET_TEXT			(ID_PAGE_TITLE_BAR_BASE + 3)
#define ID_TITLE_HOME_LINE			(ID_PAGE_TITLE_BAR_BASE + 4)
#define ID_TITLE_SET_LINE			(ID_PAGE_TITLE_BAR_BASE + 5)
#define ID_TITLE_TIME_TEXT			(ID_PAGE_TITLE_BAR_BASE + 6)


static const GUI_WIDGET_CREATE_INFO _aWindowsTitleBarCreate[] = {
	{ WINDOW_CreateIndirect,	"Window",				ID_WINDOW_TITLE_BAR, 0, 0, DEF_PAGE_WIDTH, DEF_TITLE_BAR_HEIGHT, 0, 0x0,0},
	{ IMAGEVIEW_CreateIndirect, "logo",					ID_TITLE_LOGO, 0, 0, 153, 30, 0, 0x0,0},
	{ TEXT_CreateIndirect, 		"home text",			ID_TITLE_HOME_TEXT, 0, 0, 80, 50, 0, 0x0,0},
	{ TEXT_CreateIndirect, 		"set text",				ID_TITLE_SET_TEXT, 0, 0, 80, 50, 0, 0x0,0},
	{ IMAGEVIEW_CreateIndirect, "home line",			ID_TITLE_HOME_LINE, 0, 0, 60, 4, 0, 0x0,0},
	{ IMAGEVIEW_CreateIndirect, "set line",				ID_TITLE_SET_LINE, 0, 0, 60, 4, 0, 0x0,0},
	{ TEXT_CreateIndirect, 		"time text",			ID_TITLE_TIME_TEXT, 0, 0, 120, 50, 0, 0x0,0},
};

static void _SelectItem(WM_HWIN hParent, U8 Flag);

static WM_HWIN _hTitleBar = WM_HMEM_NULL;
static void _DialogInit(WM_HWIN hParent)
{
	WM_HWIN hItem, hBase;

	WM_SetAlignParent(hParent, OBJ_ALIGN_PARENT_TOP_CENTRE, 0, 0);

	hItem = WM_GetDialogItem(hParent, ID_TITLE_LOGO);
	IMAGEVIEW_SetBitmap(hItem, &bmlogo);
	WM_SetAlignParent(hItem, OBJ_ALIGN_PARENT_LEFT_CENTER, 25, 0);

	hItem = WM_GetDialogItem(hParent, ID_TITLE_HOME_TEXT);
	WM_SetAlignParent(hItem, OBJ_ALIGN_PARENT_CENTRE, -50, 0);
	TEXT_SetFont(hItem, &GUI_FontTitleCHN_YH28);
	TEXT_SetText(hItem, "主页");
	TEXT_SetTextAlign(hItem, TEXT_CF_HCENTER | TEXT_CF_VCENTER);
	hBase = hItem;

	hItem = WM_GetDialogItem(hParent, ID_TITLE_HOME_LINE);
	WM_SetAlignWindow(hBase, hItem, OBJ_ALIGN_BROTHER_CENTER, 0, 0);
	WM_SetAlignWindow(hBase, hItem, OBJ_ALIGN_BROTHER_UNDER_BOTTOM, 2, 0);
	IMAGEVIEW_SetBkColor(hItem, GUI_BLUE);

	hItem = WM_GetDialogItem(hParent, ID_TITLE_SET_TEXT);
	WM_SetAlignParent(hItem, OBJ_ALIGN_PARENT_CENTRE, 50, 0);
	TEXT_SetFont(hItem, &GUI_FontTitleCHN_YH28);
	TEXT_SetText(hItem, "设置");
	TEXT_SetTextAlign(hItem, TEXT_CF_HCENTER | TEXT_CF_VCENTER);
	hBase = hItem;

	hItem = WM_GetDialogItem(hParent, ID_TITLE_SET_LINE);
	WM_SetAlignWindow(hBase, hItem, OBJ_ALIGN_BROTHER_CENTER, 0, 0);
	WM_SetAlignWindow(hBase, hItem, OBJ_ALIGN_BROTHER_UNDER_BOTTOM, 2, 0);
	IMAGEVIEW_SetBkColor(hItem, GUI_BLUE);

	hItem = WM_GetDialogItem(hParent, ID_TITLE_TIME_TEXT);
	WM_SetAlignParent(hItem, OBJ_ALIGN_PARENT_RIGHT_CENTER, 0, 0);
	TEXT_SetFont(hItem, &GUI_FontNumberYH48);
	TEXT_SetText(hItem, "12:00");

	WM_ShowWindowAndChild(hParent);
	_SelectItem(hParent, 1);
}

static void _SelectItem(WM_HWIN hParent, U8 Flag)
{
	//选择的是主页
	if(Flag){
		TEXT_SetTextColor(WM_GetDialogItem(hParent, ID_TITLE_HOME_TEXT), GUI_WHITE);
		WM_ShowWindow(WM_GetDialogItem(hParent, ID_TITLE_HOME_LINE));
		TEXT_SetTextColor(WM_GetDialogItem(hParent, ID_TITLE_SET_TEXT), GUI_GRAY);
		WM_HideWindow(WM_GetDialogItem(hParent, ID_TITLE_SET_LINE));
	}else{
		TEXT_SetTextColor(WM_GetDialogItem(hParent, ID_TITLE_HOME_TEXT), GUI_GRAY);
		//WM_HideWindow(WM_GetDialogItem(hParent, ID_TITLE_HOME_TEXT));
		WM_HideWindow(WM_GetDialogItem(hParent, ID_TITLE_HOME_LINE));
		TEXT_SetTextColor(WM_GetDialogItem(hParent, ID_TITLE_SET_TEXT), GUI_WHITE);
		WM_ShowWindow(WM_GetDialogItem(hParent, ID_TITLE_SET_LINE));
	}
}

static void _cbWindowsTitleBarDialog(WM_MESSAGE * pMsg) {
	int     NCode;
	int     Id;

	switch (pMsg->MsgId){
		case WM_INIT_DIALOG:
			GUI_Debug("WM_INIT_DIALOG\n");
			_DialogInit(pMsg->hWin);
		return;
		case WM_DELETE:
			_hTitleBar = WM_HMEM_NULL;
		return;
		case WM_NOTIFY_PARENT:
			Id    = WM_GetId(pMsg->hWinSrc);
			NCode = pMsg->Data.v;
			if(NCode == WM_NOTIFICATION_RELEASED){
				switch(Id){
					case ID_TITLE_HOME_TEXT:
						_SelectItem(pMsg->hWin, 1);
						PageListShowWinByName(PAGE_MAIN);
					break;
					case ID_TITLE_SET_TEXT:
						_SelectItem(pMsg->hWin, 0);
						PageListShowWinByName(PAGE_SET);
					break;
					case ID_TITLE_TIME_TEXT:
						DialogTimeSetCreate(WM_HBKWIN);
					break;
				}
			}
		break;
		case WM_TOUCH_PRESSING:
			if(ID_TITLE_LOGO == WM_GetId(pMsg->hWinSrc)){
				GUI_Debug("Press logo icon\n");
			}
		break;
		default:
			WM_DefaultProc(pMsg);
		break;
	}
}

WM_HWIN PageTitleBarCreate(void)
{
	if(WM_HMEM_NULL == _hTitleBar){
		GUI_Debug("title bar create\n");
		_hTitleBar = GUI_CreateDialogBox(_aWindowsTitleBarCreate, GUI_COUNTOF(_aWindowsTitleBarCreate), _cbWindowsTitleBarDialog, WM_HBKWIN, 0, 0);
		GUI_Debug("title bar %d create end\n", _hTitleBar);
	}
	return _hTitleBar;
}


