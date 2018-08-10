// AeroGlassGDI.cpp : 定义 DLL 的初始化例程。
//

#include "stdafx.h"
#include "AeroGlassGDI.h"

#include "../common/aerosubc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CAeroGlassGDIApp, CWinApp)
END_MESSAGE_MAP()


// CAeroGlassGDIApp 构造

CAeroGlassGDIApp::CAeroGlassGDIApp() {
    // TODO: 在此处添加构造代码，
    // 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的一个 CAeroGlassGDIApp 对象

CAeroGlassGDIApp theApp;


// CAeroGlassGDIApp 初始化

BOOL isValidSystem() {
    int a = 0, b = 0, i = 0, j = 0;
    _asm {
        pushad
        mov ebx, fs:[0x18] // get self pointer from TEB
        mov eax, fs:[0x30] // get pointer to PEB / database
        mov ebx, [eax+0A8h] // get OSMinorVersion
        mov eax, [eax+0A4h] // get OSMajorVersion
        mov j, ebx
        mov i, eax
        popad
    }
    return (i>=6);
}

BOOL CAeroGlassGDIApp::InitInstance() {
    CWinApp::InitInstance();
    return TRUE;
}
