#include<stdio.h>
int main(){
    FILE *f=NULL;
    int tuoi =0;
    f=fopen("Th1.text","w");
    if (f!=NULL)
    {
        printf("Ban bao nhieu tuoi ?");
        scanf("%d",&tuoi);
        fprintf(f,"Nguoi su dung may tinh nay tuoi %d ",tuoi);
        fclose(f);

    }
    return 0;
}