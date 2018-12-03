
// MFC lab 2.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMFClab2App:
// О реализации данного класса см. MFC lab 2.cpp
//

class CMFClab2App : public CWinApp
{
public:
	CMFClab2App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMFClab2App theApp;