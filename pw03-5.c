#include <stdio.h>
#include <string.h>

int main()
{
    char a; //%s - для строк, %c - для символа
    scanf("%c", &a);
    printf("CODE_DEC: %d\n",a);
    printf("CODE_HEX: %x\n",a);
    printf("CODE_OCT: %o\n",a);
    printf("UPPER: %c\n", a-32); //в аски m идет под 109 номером, M - под 77. Разница номера в 32 символа вежду строчной и заглавной в системе аски у всех букв 
    printf("NEXT: %c\n", a+1);
    printf("PREV: %c\n", a-1);
    return 0;
}