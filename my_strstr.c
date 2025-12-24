#include<stdio.h>
#include<string.h>
char *strstr(const char *haystack, const char *needle);
int main(){
    char haystack[200], needle[100];
    char *result;

    printf("Enter first string: ");
    scanf("%[^\n]", haystack);

    getchar();   

    printf("Enter second string: ");
    scanf("%[^\n]", needle);
    getchar();
    char *strstr(str1,str2);
     if (result != NULL)
        printf("Substring found at: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}
char *my_strstr(const char *s1, const char *s2)
{
    const char *p1, *p2;

    if (*s2 == '\0')   // empty substring
        return (char *)s1;

    while (*s1)
    {
        p1 = s1;
        p2 = s2;

        while (*p1 && *p2 && (*p1 == *p2))
        {
            p1++;
            p2++;
        }

        if (*p2 == '\0')   // full match found
            return (char *)s1;

        s1++;
    }

    return NULL;
}