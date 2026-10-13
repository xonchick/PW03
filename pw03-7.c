#include <stdio.h>
#include <string.h>

#define a "LinuxDistro"
const char b[5]="2026";

int main()
{
    printf("DISTRO: %s\n", a);
    printf("RDATE: %s\n", b);
    printf("STRLEN: %d\n", strlen(a));
    printf("SIZEOF: %d\n", sizeof(a));
    return 0;

}
