
// TaskManagerMFC.h : main header file for the TaskManagerMFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CTaskManagerMFCApp:
// See TaskManagerMFC.cpp for the implementation of this class
//

class CTaskManagerMFCApp : public CWinApp
{
public:
	CTaskManagerMFCApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTaskManagerMFCApp theApp;
