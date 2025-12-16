<<<<<<< HEAD
/*WAP to check if the system is little or big endian  

1. Take a integer variable and store the value as 0x12345678

2. take a characater pointer and make it point to the integer variable

3. Dereference and compare whether the value is 0x78, if yes print it as little endian system

     else print it as big endian system

Eg:*/
#include <stdio.h>

int main() {
    int n = 0x12345678;
    unsigned char *ch = (unsigned char*)&n;  // use unsigned char to avoid sign issues

    printf("First byte = 0x%X\n", *ch);

    if (*ch == 0x78) {   // 0x78 = decimal 120
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }

    return 0;
}

=======
#include<stdio.h>
int main(){
    int x=20,y=30;
    int *ptr;
    ptr=&x;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d\n",x);
    ptr=&y;
     printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d\n",y);
    *ptr=18;
      printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*ptr);
    printf("%d",y);
    
}
>>>>>>> 83e84f5bba08c706b4861930fb74e4967f17692a
