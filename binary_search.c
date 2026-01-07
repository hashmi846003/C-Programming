#include<stdio.h>
int main(){
    int a[]={1,3,5,7,9,11,13,15};
    int target=11;
    int size = sizeof(a) / sizeof(a[0]);
  //  int middle=a[0]+(a[7]-a[0])/2;
    int low = 0, high = size - 1;
    int found = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;  

        if (a[mid] == target) {
            found = mid;
            break;
        } else if (a[mid] < target) {
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }

    if (found != -1)
        printf("Element %d found at index %d\n", target, found);
    else
        printf("Element %d not found\n", target);

    return 0;



}