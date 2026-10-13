#include <wchar.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, ""); //устанавливка локали нужна чтобы корректно работали русские буквы
    const char a[] = "Сбой матрицы";
    const wchar_t La[] = L"Сбой матрицы"; //L делает строку широкой, чтобы можно было использовать UTF-8
    printf("char    -> sizeof: %d bytes, strlen: %d chars\n", sizeof(a), strlen(a));
    printf("wchar_t -> sizeof: %d bytes, wcslen: %d chars\n", sizeof(La), wcslen(La));
    return 0;
}