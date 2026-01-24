#include<stdio.h>
int main()
{
    FILE *fp;
    if((fp=fopen("text.txt","w+"))==NULL){
        printf("File not found\n");
        return 0;
    }
    fputs("abcdbcgcsdfc",fp);
    rewind(fp);
    int i=1;
    int ch;
    while((ch=fgetc(fp))!=EOF){
        if(ch=='c'){
            printf("%d th occurence is at %ld\n",i++,ftell(fp));
        }
    }
    fclose(fp);
}