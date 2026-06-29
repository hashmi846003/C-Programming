#include <stdio.h>
#include <stdlib.h>
int main(){
    int r, c;
printf("Enter rows and columns: ");
scanf("%d %d", &r, &c);
int a[r][c];
printf("Enter matrix:\n");
for(int i = 0; i < r; i++)
{
for(int j = 0; j < c; j++)
scanf("%d", &a[i][j]);
}
printf("Wave output: ");
for(int j = 0; j < c; j++)
{
if(j % 2 == 0)
{
for(int i = 0; i < r; i++)
printf("%d ", a[i][j]);
} else {
for(int i = r - 1; i >= 0; i--)
printf("%d ", a[i][j]);
}
}
}