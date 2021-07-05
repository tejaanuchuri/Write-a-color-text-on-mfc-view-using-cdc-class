
// Write a color text on mfc view using cdc class.h : main header file for the Write a color text on mfc view using cdc class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CWriteacolortextonmfcviewusingcdcclassApp:
// See Write a color text on mfc view using cdc class.cpp for the implementation of this class
//

class CWriteacolortextonmfcviewusingcdcclassApp : public CWinAppEx
{
public:
	CWriteacolortextonmfcviewusingcdcclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWriteacolortextonmfcviewusingcdcclassApp theApp;
