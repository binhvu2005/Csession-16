#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *f;
    char str[100];
    f = fopen("bt01.txt","r");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    fscanf(f, "%s", &str);
    puts(str);
    fclose(f);
}