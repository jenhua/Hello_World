
// hello_world.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Chello_worldApp:
// See hello_world.cpp for the implementation of this class
//

class Chello_worldApp : public CWinApp
{
public:
	Chello_worldApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Chello_worldApp theApp;