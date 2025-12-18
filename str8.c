#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[5]={4,1,5,3,9};
    int i,j,temp;
    int n=5;
    int max=arr1[0];
    for(i=0;i<=n-1;i++)
    {
      if (max<arr1[i])
    {
        max= arr1[i];
    }

    }
    printf("The largest element is %d\n",max);                                                                                          
  return 0;
}