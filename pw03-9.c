#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    wchar_t a[100];
    wscanf(L"%ls", a); //ls - long string
    wprintf(L"Агент %ls авторизован в системе\n", a);
    return 0;
}