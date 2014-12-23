
// myMFC.h : main header file for the myMFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CmyMFCApp:
// See myMFC.cpp for the implementation of this class
//

class CmyMFCApp : public CWinApp
{
public:
	CmyMFCApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmyMFCApp theApp;
