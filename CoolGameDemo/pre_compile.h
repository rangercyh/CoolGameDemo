//---------------------------------------------------------------------------
// CoolGame Engine
// CreateDate: 2013.12.11
// Creater:    Caiyiheng
// Describe:   pre compile file
//---------------------------------------------------------------------------


#ifndef ENGINE_PRECOMPILE_H_
#define ENGINE_PRECOMPILE_H_

#include "custom_stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#ifdef WIN32
  #include <windows.h>
  #include "winsock2.h"
#else
  #include <pthread.h>
#endif


#endif  // ENGINE_PRECOMPILE_H_