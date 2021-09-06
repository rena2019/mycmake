#define UNICODE
#include <stdio.h>
#include <windows.h>

int hello()
{
  MessageBox( 0, L"hello world", L"DLL message:", MB_ICONINFORMATION | MB_SETFOREGROUND );
  return 123;
}  

//can be executed with "runddl32.exe <dllname>,RunDllMe"
extern "C"
__stdcall void CALLBACK RunDllMe(HWND, HINSTANCE, wchar_t const*, int) 
{
	hello();
}