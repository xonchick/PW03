#include <stdio.h>
#include <string.h>

int main()
{ //закодиоованно: "\H\e\l\l\o\tab\W\o\r\l\d \n"
    char a[]="\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf("%s", a);
    printf("STRLEN: %d\n", strlen(a));
    printf("SIZEOF: %d\n", sizeof(a));
    return 0;
}