#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("After sorting ->\n");
for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
    printf("\n");
}
}