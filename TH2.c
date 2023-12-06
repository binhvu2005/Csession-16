#include <stdio.h>
int main()
{
    FILE *f = NULL;
    int kyTu = 0;
    f = fopen("Th1.text", "r");
    if (f != NULL)
    {
        do
        {
            kyTu = fgetc(f);
            printf("%c", kyTu);
        } while (kyTu != EOF);
        fclose(f);
    }
    return 0;
}