//Remove duplicate characters from string
#include<stdio.h>
#include<string.h>
int main(){
    int size;
    scanf("%d",&size);
    char str[size];
    scanf("%[^\n]",str);
    getchar();
    int len=strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (str[i] == str[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            str[j] = str[i];  
            j++;
        }
    }
    str[j] = '\0';  

    printf("String after removing duplicates: %s\n", str);
    return 0;
}

