#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *f,*f01,*f03;
    char x[20],x1[20];
    int j;
    f = fopen("bt5.txt","w");
    f01 = fopen("bt01.txt","r");
    f03 = fopen("bt03.txt","r");
    if ( (f == NULL) || (f01 == NULL) || (f03 == NULL) ) {
        printf("khong the mo file");
        exit(0);
    }
    fgets(x, sizeof(x),f01);
    fprintf(f, "%s\n", x);
    while (fgets(x1, sizeof(x1),f03) != NULL){
        fprintf(f, "%s\n", x1);
    }
    fclose(f);
    fclose(f01);
    fclose(f03);
    f = fopen("bt5.txt","r");
     while (!feof(f)){
        fgets(x, sizeof(x), f);
        printf("%s",x);
    }
    fclose(f);
}