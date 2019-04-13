#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void initMinDump();
int GenerateMiniDump(HANDLE hFile, PEXCEPTION_POINTERS pExceptionPointers, PWCHAR pwAppName);
LONG WINAPI ExceptionFilter(LPEXCEPTION_POINTERS lpExceptionInfo);
