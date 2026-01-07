#include<stdio.h>
#include<string.h>

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
        printf("string literals shared\n");
    }else{
        printf("not shared");
    }
    return 0;
}
