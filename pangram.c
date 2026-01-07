#include <stdio.h>

int pangram(char str []);

int main()
{
   // int alpha[25]={0};
    char str[200];
    scanf("%[^\n]",str);
    getchar();
    pangram(str);
    if (pangram(str))
        printf("The Entered String is a Pangram String\n");
    else
        printf("The Entered String is not a Pangram String\n");

    return 0;
}
int pangram(char str[]){
    int alpha[26]={0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            alpha[str[i] - 'a'] = 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            alpha[str[i] - 'A'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0)
            return 0;   
    }

    return 1;           
}

    
//}