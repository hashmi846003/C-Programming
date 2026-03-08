#include<stdio.h>
int main(){
    char str1[6]="hello";
    char str2[6]="hello";
    char *str3="hello";
    char *str4="hello";
    if (str1==str2){
        printf("modifiable string are shared\n");
    }else{
        printf("not shared\n");
    }
if(str3==str4){
    printf("string literals are shared\n");
}else{
    printf("string literals are not shared");
}
}