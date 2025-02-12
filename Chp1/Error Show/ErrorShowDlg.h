﻿
// ErrorShowDlg.h: 头文件
//

#pragma once


// CErrorShowDlg 对话框
class CErrorShowDlg : public CDialogEx
{
// 构造
public:
	CErrorShowDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ERRORSHOW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	DWORD ErrorNumber;
	HLOCAL LocalHandle;    // Buffer that gets the error message string
	DWORD SystemLocale;
	CEdit EditError;

	// 获取错误信息
	void ReturnErrorMessage(const DWORD ErrorCode);
public:
	afx_msg void OnBnClickedButtonFind();
};
