#include <stdio.h>
int main()
{
    FILE *f = NULL;
    const int kyTu=1000;
    char chuoi[kyTu];
    f=fopen("TH1.text","r");
    if (f!=NULL)
    {
        fgets(chuoi,kyTu,f);
        printf("%s",chuoi);
        fclose(f);
    }
    return 0;

}