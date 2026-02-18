#include<stdio.h>
#include<string.h>
int main(){
char str[4][10]={"hello","how","are","you"};
printf("%s\n",str[0]);
printf("%s\n",str[1]);
printf("%s\n",str[2]);
printf("%s\n",str[3]);
str[0][1]='E';
printf("%s\n",str[0]);
scanf("%s",str[1]);
printf("%s\n",str[1]);
strcpy(str[3],"YOUR");
printf("%s",str[3]);

}