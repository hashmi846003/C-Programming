// Search an element in an array using linear as well as bubble sort
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];                       
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }               
    int key;
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    // Linear Search
    int found=0;
    for (int i=0;i<n;i++){
        if (array[i]==key){
            found=1;
            printf("Element %d found at index %d using Linear Search\n", key, i);
            break;
        }
    }
    if (!found){            
        printf("Element %d not found using Linear Search\n", key);
    }               
    // Bubble Sort
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (array[j]>array[j+1]){       
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    // Binary Search
    int left=0, right=n-1;
    found=0;
    while (left<=right){            
        int mid=left+(right-left)/2;
        if (array[mid]==key){
            found=1;
            printf("Element %d found at index %d using Binary Search\n", key, mid);
            break;
        }
        else if (array[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if (!found){            
        printf("Element %d not found using Binary Search\n", key);
    }
    return 0;
}