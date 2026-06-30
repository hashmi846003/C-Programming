#include<stdio.h>
#include<string.h>
int main(){
    char name[]={"hello world"};
    int len=strlen(name);
    int freq[256]={0};
    for (int i=0;i<len;i++){
        freq[(unsigned char)name[i]]++;
    }
    for(int i=0;i<len;i++){
        if(freq[(unsigned char)name[i]] == 1){
            printf("%c ",name[i]);
        }
    }
}