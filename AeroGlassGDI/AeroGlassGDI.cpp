// AeroGlassGDI.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "AeroGlassGDI.h"

#include "../common/aerosubc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CAeroGlassGDIApp, CWinApp)
END_MESSAGE_MAP()


// CAeroGlassGDIApp ����

CAeroGlassGDIApp::CAeroGlassGDIApp() {
    // TODO: �ڴ˴���ӹ�����룬
    // ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CAeroGlassGDIApp ����

CAeroGlassGDIApp theApp;


// CAeroGlassGDIApp ��ʼ��

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
