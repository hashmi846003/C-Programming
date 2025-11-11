#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
	char str[] = "Fakhruddin";
	char str1[] = {'H', 'A', 'S','H', 'M', 'I', '\0'};
	 int len = strlen(str);
	 int len1;
//	printf("%s, %s", str, str1);
 printf("%c", str1);

 printf("Hello Fakru give length");
 scanf("%d", &len1);
 // char str2[len1];
 char *s = (char *) malloc((len1+1)*sizeof(char));
 printf("Hello Fakru give string");
 
 //loop
// for(int i =0; i<= len1 -1; i++)
 //scanf("%c",&s[i]);
 //without loop
 scanf("%s",s);
 printf("%s", s);

 free(s);

return 0;
}
