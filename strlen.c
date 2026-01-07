#include <stdio.h>
#include <stddef.h>  // for size_t

size_t my_strlen(const char *s)
{
    size_t len = 0;
    while (*s != '\0')   
    {
        len++;
        s++;             
    }
    return len;
}

int main()
{
   char str[100];
  // scanf("%[^\n]",str);
  scanf("%99[^\n]", str);
   // const char *str = "Hello World";
 //  fgets(str, sizeof(str), stdin);
    printf("Length: %zu\n", my_strlen(str));
    return 0;
}

