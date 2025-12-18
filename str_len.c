#include<stdio.h>
int my_strlen(const char *ptr);
int main(){
    int count=0;
    char str[100];
    scanf("%[^\n]",str);
    int ret=my_strlen(str);
    printf("Length is %d",ret);
}
int my_strlen(const char *ptr){
    int count=0;
    while (ptr[count]){
        count ++;
    }
    return count;
}