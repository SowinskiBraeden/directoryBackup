#include <stdio.h>
#include <windows.h>
#include "../include/data.h"

int WINAPI WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR lpCmdLine,int nCmdShow
) {
  int size = 15;
  int data = getData();
  char buf[size];
  snprintf(buf, size, "Hello World %d", data);
  MessageBox(NULL, buf, "Note", MB_OK);
  return 0;
}
