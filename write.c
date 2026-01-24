#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;

    /* Open file for write + read */
    fp = fopen("text.txt", "w+");
    if (fp == NULL) {
        perror("File open failed");
        return 1;
    }

    /* Write characters to file */
    fputc('M', fp);
    fputc('I', fp);
    fputc('K', fp);
    fputc('E', fp);

    
    rewind(fp);

    
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, stdout);
    }

    
    fclose(fp);

    return 0;
}
