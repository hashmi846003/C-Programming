#include<stdio.h>
#include<math.h>
int main(){
    int salary;
    scanf("%d",&salary);
    int rate;
    scanf("%d",&rate);
    int time;
    scanf("%d",&time);
    float salary_new;
    salary_new=salary*pow(1+rate/100.0,time);
    printf("%f",salary_new);
}