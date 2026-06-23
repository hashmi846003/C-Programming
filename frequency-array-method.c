#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[100]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    printf("unique elements\n");
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==2){
            printf("%d ",arr[i]);
        }
    }

    
}
