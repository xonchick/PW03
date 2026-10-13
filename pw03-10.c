#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    wchar_t a[100],b[100],c[100];
    setlocale(LC_ALL, "");
    wscanf(L"%ls %ls %ls", a,b,c);
    wprintf(L"%-15ls|%20ls|%.5ls\n", a,b,c);
    return 0;

}