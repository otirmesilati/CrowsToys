#include <stdio.h> 
#include <windows.h>

int main() 
{
    MessageBoxW(
        NULL,
        L"My first message box!",
        L"Hello World!",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );
    return EXIT_SUCCESS;
}