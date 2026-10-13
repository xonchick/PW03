#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="SibSUTIS\0";
    printf("SIZEOF: %d\n", sizeof(a));
    printf("STRLEN: %d\n", strlen(a));
    printf("FREE_BYTES: %d\n", sizeof(a)-strlen(a) - 1); //вес текста равен его длине, т.к. 1 символ = 1 байт
    return 0; // для нахождения свободных байт: (размер всего массива - кол-во занятых байтов - технически ноль)
}