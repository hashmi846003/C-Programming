#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=6;
    int pos=3;
    int value=55;
    if(pos>=0 && pos<=size){
        for(int i=size;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=value;
        size++;
    }
  //  arr[3]=45;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}