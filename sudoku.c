#include<stdio.h>
#include<string.h>

int main(){
    int sudo[3][3];
    int freq[10] = {0};   

    // Input 3x3 Sudoku grid
    printf("Enter 3x3 Sudoku grid:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &sudo[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int val = sudo[i][j];
            if(val >= 1 && val <= 9){
                freq[val]++;
            }
        }
    }

    int valid = 1;
    for(int k=1; k<=9; k++){
        if(freq[k] != 1){   // each digit must appear exactly once
            valid = 0;
            break;
        }
    }

    if(valid){
        printf("Valid Sudoku\n");
    } else {
        printf("Invalid Sudoku\n");
    }

    return 0;
}
