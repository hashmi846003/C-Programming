#include<stdio.h>
#include<stdlib.h>
//void print_menu(char **);
int main(){
    char *menu={"File(","Edit","View","Inser","Help"};
    int option;
    int size=sizeof(menu)/sizeof(menu[0]);
    print_menu(menu,size);
   printf(" select your option:\n");
   scanf("%d",&option);
   printf("you have selected %s menu\n",menu[option-1]);
}
void print_menu(char *menu[],int size){
for(int i=0;i<size;i++){
    printf("%d %s",i+1,menu[i]);
}
}