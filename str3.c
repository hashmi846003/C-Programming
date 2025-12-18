#include<stdio.h>
#include<string.h>

int main(){
//	char str[]="Afzal Warsi";
	int len, count=0;

printf("Enter string length");
scanf("%d", &len);

//int len = strlen(str);
//printf("String length is : %d", len);
//printf("\nEnter string: ");
char *s = (char *) malloc( len* sizeof(char));
printf("\nEnter string: ");
scanf("%[^\n]", s);
getchar();
 printf("String is %s", s);

for (int i=0;i<len;i++){

//		if (str[i]=='a'||str[i]=='A'||str[i]=='i'||str[i]=='I'||str[i]=='e'||str[i]=='E'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
	if (s[i]=='a'||s[i]=='A'||s[i]=='i'||s[i]=='I'||s[i]=='e'||s[i]=='E'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){		
	count++;
		}

//	printf("%d",count);
	}
	printf("%d",count);
	return 0;
}
