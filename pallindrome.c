#include <stdio.h>
int pallindrome(const char *);
int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

printf("Enter a string: ");
scanf("%[^\n]", str);
int result = pallindrome(str);
if(result)
    printf("pallindrome\n");
else
    printf("not pallindrome");
return 0;    
}
int pallindrome(const char *ptr){
    int size=0;
    while(ptr[size])
    size++;
   int start=0,end=size-1;
   while(start<end)
   {
    if (ptr[start]!=ptr[end])
        return 0;
    start++;
    end--;
   } 
   return 1;
}
