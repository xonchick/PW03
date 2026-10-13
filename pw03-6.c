#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int width;
    scanf("%s %d", &a, &width);
    printf("%*s\n", width, a); // * печатает пробелы в количестве width
    printf("%-*s\n", width+5, a); // -* печатает пробелы с другой стороны
    return 0;
}