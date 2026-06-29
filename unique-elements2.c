#include<stdio.h>
int main(){
    int n;
    int count[100]={0};
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if (count[arr[i]]==1){
            printf("%d ",arr[i]);
        }
    }
}