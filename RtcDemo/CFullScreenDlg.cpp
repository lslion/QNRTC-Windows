// CFullScreenDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CFullScreenDlg.h"
#include "afxdialogex.h"
#include "resource.h"


// CFullScreenDlg dialog

IMPLEMENT_DYNAMIC(CFullScreenDlg, CDialogEx)

CFullScreenDlg::CFullScreenDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_FULL, pParent)
{

}

CFullScreenDlg::~CFullScreenDlg()
{
}

void CFullScreenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFullScreenDlg, CDialogEx)
END_MESSAGE_MAP()


// CFullScreenDlg message handlers
