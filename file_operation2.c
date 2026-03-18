#include <stdio.h>

int main(void) {
    FILE *fp = fopen("./breakout", "r");
    if (!fp) {
        perror("File open failed");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}