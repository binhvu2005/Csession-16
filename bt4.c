#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *f;
    char x[20];
    f = fopen("bt03.txt","r");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    int i = 0;
    while (fgets( x, sizeof(x) , f) != NULL){
        printf("%d:%s", i+1,x);
        i++;
    }
    printf("so dong la %d",i);
    fclose(f);
}
