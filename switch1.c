#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of the day (1-7): ");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;                                                                                                                               
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    printf("Hello world\n");
    return 0;
}   