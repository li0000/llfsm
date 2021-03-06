//============================================================================
// Name        : llRef.h
// Author      : Stefan Gao (stefan.gao@gmail.com)
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include "../core/llTimer.h"

#define LL_PLATFORM_SHELL    1
#define LL_PLATFORM_WIN      0
#define LL_PLATFORM_IOS      0
#define LL_PLATFORM_ANDROID  0
#define LL_PLATFORM_COCOS2DX 0

#if LL_PLATFORM_SHELL == 1
    #include "llTimer_shell.h"
#elif LL_PLATFORM_WIN == 1
    #include "llTimer_win.h"
#endif

