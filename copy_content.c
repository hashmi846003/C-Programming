#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE *source,*target;
    char ch;
    source=fopen("text.txt","r");
    if (source==NULL){
        printf("can't open source file");
        exit(1);
    }
    target=fopen("text_copy.txt","w");
    if (target==NULL){
        printf("can't open target file");
        fclose(source);
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully to text_copy.txt\n");

    fclose(source);
    fclose(target);

    return 0;


    
}