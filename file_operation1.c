#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int lines=0, words=0, chars=0;
    int in_word=0;
        while ((ch = fgetc(fp)) != EOF){
          chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            words++;  
        }

    }
    printf("Lines: %d\nWords: %d\nChars: %d\n", lines, words, chars);

    fclose(fp);
}