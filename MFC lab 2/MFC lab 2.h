
// MFC lab 2.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CMFClab2App:
// � ���������� ������� ������ ��. MFC lab 2.cpp
//

class CMFClab2App : public CWinApp
{
public:
	CMFClab2App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CMFClab2App theApp;