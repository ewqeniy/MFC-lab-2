
// MFC lab 2Dlg.h : файл заголовка
//

#pragma once


// диалоговое окно CMFClab2Dlg
class CMFClab2Dlg : public CDialogEx
{
// Создание
public:
	CMFClab2Dlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCLAB2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString qTimer;
	afx_msg void timerChange();
};
