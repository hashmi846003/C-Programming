#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=realloc(NULL,5*sizeof(int));
    char *ptr1=realloc(NULL,5*sizeof(char));
    printf("enter the input for integers\n");
    for(int i=0;i<5;i++)
        scanf("%d",&ptr[i]);
    printf("Enter the characters\n");
    //getchar();
    for(int i=0;i<5;i++)
        scanf("%c",&ptr1[i]);
        getchar();
    printf("interger elements are----->\n");
    for (int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    printf("character elements are--->\n");
    for(int i=0;i<2;i++)
        printf("%c\n",ptr1[i]);
    printf("\n");
    ptr=realloc(ptr,0);
    ptr1=realloc(ptr1,0);        
}