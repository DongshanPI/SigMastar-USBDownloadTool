
// USBDownloadTool.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CUSBDownloadToolApp:
// �йش����ʵ�֣������ USBDownloadTool.cpp
//

class CUSBDownloadToolApp : public CWinApp
{
public:
	CUSBDownloadToolApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CUSBDownloadToolApp theApp;