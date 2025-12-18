#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int count_even=0;
    int count_odd=0;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        if (array[i]%2==0){
        printf("%d ",array[i]);
        }
        count_even++;

        if (array[i]%2!=0){
        printf("%d ",array[i]);
        
        }
        count_odd++;

    }
    printf("\nEven count: %d\n", count_even);
    printf("Odd count: %d\n", count_odd);

int sum=0;
    for (int i=0;i<n;i++){
        sum+=array[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
/*    
for (int i=0;i<n;i++){
        if (array[i]%2==0){
            array[i]=0;
            printf("%d\n ", array[i]);
        }else{
            array[i]=1;
            printf("%d\n ", array[i]);
        }           
    }
    return 0;
int j;
for (int i=0;i<n;i++){
    for (j=0;j<n-i-1;j++){
        if (array[j]>array[j+1]){
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
         //   printf( "Lagest element: %d\n", array[n-1]);
        }
    }
    printf( "Lagest element: %d\n", array[n-1]);
    for (int i=n;i<=1;i--){
        printf("reverse order: %d\n", array[i]);

    }
    

}
}
*/
}