#include <stdio.h>
#include <string.h>

int main()
{
    char word1[15];
    char word2[15];

    scanf("%s %s", &word1, &word2); //%s считывает пробел как \0, поэтому запись текста прервывается, поэтому мы записывали текст как два отдельных слова
    printf("%s-%s\n", word1, word2 );
    printf("TOTAL_LEN: %d\n", strlen(word1)+strlen(word2));
    return 0;
}