#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s\n",&str1);
    scanf("%s",&str2);
    printf("%d",my_strcmp(str1,str2));
}
int my_strcmp(const char *ptr1,char *ptr2){
    while((*ptr1-*ptr2)){
        ptr1++;
        ptr2++;
    }
    return *ptr1-*ptr2;
}