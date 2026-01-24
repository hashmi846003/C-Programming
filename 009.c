#include<stdio.h>
#include<unistd.h>
int main(){
    for(int i=0;i<100;i++)
    {
        printf("Loading [");
        for (int j=0;j<i;j++){
            printf("_");
        }
        for (int j=0;j<100-i;j++)
        {
            printf(" ");
        }
        printf("] %d %%\r",i);
        fflush(stdout);
        sleep(1);
    }
}