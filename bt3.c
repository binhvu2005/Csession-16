#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *f;
    int n,n1;
    char x[20],x1[20];
    f = fopen("bt03.txt","w");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    printf("nhap vao so dong:");
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++){
        gets(x);
        fprintf(f, "%s\n", x);
    }
    fclose(f);
    f = fopen("bt03.txt","r");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    for (int i=0;i<n;i++) {
        fscanf(f, "%s", x1);
        printf("%d:%s\n",i+1,x1);
    }
    fclose(f);
}
