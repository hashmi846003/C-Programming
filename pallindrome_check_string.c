#include<stdio.h>
void pallindrome(char str1[]);
int main(){
    char str1[100];
    printf("Enter the string :\n");
    scanf("%[^\n]",str1);
    pallindrome(str1);
}
void pallindrome(char *str1){
    int i=0,len=0;
    while(str1[i]!='\0'){
        i++;
        len++;
    }
    for (i=0;i<len/2;i++){
        if (str1[i]!=str1[len-i-1]){
            printf("No, Entered string is not a pallindrome\n");
            return;
            
        }else{
            printf("Yes, Entered string is a pallindrome");
        }
    }
}
