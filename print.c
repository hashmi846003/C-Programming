#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    if(fp1=fopen("text.txt","r")==NULL);
    {
        printf("File text.txt not found");
        return 0;
    }
    if(fp2=fopen("text_copy.txt","r")==NULL);
    {
        printf("File text_copy.txt not found");
        return 0;
    }
    char ch;
    while(ch=fgetc(fp1)!=EOF){
        fputc(ch,fp2);
    }
}