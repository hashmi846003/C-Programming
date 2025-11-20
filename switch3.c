#include<stdio.h>
int main(){
    char h;
    printf("Enter the character\n");
    scanf("%c",&h);
    switch(h){
    case 'A' ... 'Z': printf("upper case\n");
                    break;
    case 'a' ... 'z': printf("Lower case\n");
                    break;
    case '0' ... '9': printf("Digit\n");
                    break;
    default: printf("None of these\n");
    }
}










    
