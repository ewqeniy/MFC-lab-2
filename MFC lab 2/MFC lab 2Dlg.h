
// MFC lab 2Dlg.h : ���� ���������
//

#pragma once


// ���������� ���� CMFClab2Dlg
class CMFClab2Dlg : public CDialogEx
{
// ��������
public:
	CMFClab2Dlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCLAB2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString qTimer;
	afx_msg void timerChange();
};
