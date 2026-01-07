#include <stdio.h>

char *my_strcat(char *dst, const char *src);

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the string1: ");
    scanf("%[^\n]", str1);
    getchar();

    printf("Enter the string2: ");
    scanf("%[^\n]", str2);

    my_strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

char *my_strcat(char *s1, const char *s2)
{
    char *temp = s1;

    
    while (*s1)
        s1++;

    
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';

    return temp;
}
