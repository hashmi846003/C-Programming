#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);

    a = n ^ (n >> 1);   

    if ((a & (a + 1)) == 0) {
        printf("%d has alternating bits\n", n);
    } else {
        printf("%d does NOT have alternating bits\n", n);
    }

    return 0;
}
