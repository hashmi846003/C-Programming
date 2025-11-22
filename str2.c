#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
 char str[]="hashmi";
int len;


printf("Printing string with fgets");

printf("\n Enter String length\n");
scanf(" %d", &len);
getchar();

char *s = (char *) malloc((len+1)* sizeof(char));

 printf("Enter the string\n");

//fgets(s, len+1, stdin);
//s[strcspn(s, "\n")] = '\0';  
//printf("%s", s);

while(fgets(s, len + 1, stdin) != NULL) {
        // remove newline
        s[strcspn(s, "\n")] = '\0';
//        printf("%s\n", s);  // print the line
    }
  printf("%s\n", s);  // print the line



return 0;
}

