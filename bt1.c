#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *f;
    char str[100];
    f = fopen("bt01.txt","w");
    if (f == NULL) {
        printf("khong the tao file");
        exit(0);
    }
    printf("nhap vao chuoi:");
    getchar();
    gets(str);
    fprintf(f, "%s", str);
    fclose(f);
}