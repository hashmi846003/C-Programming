#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,col,nrow,ncol;
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&row,&col);
    int **arr=malloc(row*sizeof(int*));
for(int i=0;i<row;i++){
     arr[i]=malloc(col*sizeof(int));
}
scan(arr,row,col);
print(arr,row,col);
printf("Enter the new row and col\n");
scanf("%d %d",&nrow,&ncol);
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        scanf("%d %d",&nrow,&ncol);
    }
}
newscan(arr,row,col,nrow,ncol);
newprint(arr,nrow,ncol);
print(arr,nrow,ncol);
printf("freeing------>\n");
for (int i=0;i<nrow;i++){
    free(arr[i]);
}
free(arr);

}
void scan(int **ptr,int row,int col){
    for (int i=0;i<<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&ptr[i][j]);
        }
    }

}
void print(int **ptr,int row,int col){
    for (int i=0;i<<row;i++){
        for(int j=0;j<col;j++){
            print("%d",&ptr[i][j]);
        }
    }

}
newscan(int **ptr,int row,int col,int nrow,int ncol){
 for(int i=0;i<row;i++){
    for(int j=col;j<ncol;j++){
        scanf("%d",&ptr[i][j]);
    }
 }
 for (int i=row;i<nrow;i++){
    for(int j=0;j<ncol;j++){
        scanf("%d",&ptr[i][j]);
    }
 }
}
newprint(int **ptr,int nrow,int ncol){
 for(int i=0;i<nrow;i++){
    for(int j=0;j<ncol;j++){
        scanf("%d",&ptr[i][j]);
    }
 }
 for (int i=0;i<nrow;i++){
    for(int j=0;j<ncol;j++){
        printf("%d",&ptr[i][j]);
    }
 }
}