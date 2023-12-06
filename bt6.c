#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[30];
    int age, phone_number;
    char email_adress[100];
};
typedef struct student std;
void input(std *temp){
    printf("nhap ten sinh vien:");
    getchar();
    gets(temp->name);
    printf("nhap tuoi:");
    scanf("%d",&temp->age);
    printf("nhap sdt:");
    scanf("%d",&temp->phone_number);
    printf("nhap email:");
    getchar();
    gets(temp->email_adress);
}
void output( std *temp){
    printf("ten:%s, tuoi:%d, sdt:%d, email:%s\n",temp->name, temp->age, temp->phone_number, temp->email_adress);
}
void input_file(std list[], int n){
    FILE *f;
    f = fopen("students.txt","wb");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    for (int i=0;i<n;i++){
        fwrite(&list[i], sizeof(std), 1, f);
    }
    fclose(f);
}
void output_file(std list[], int n){
    FILE *f;
    f = fopen("students.txt","rb");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    for (int i=0;i<n;i++){
        fread(&list[i], sizeof(std), 1, f);
    }
    fclose(f);
}
int main(){
    int n;
    std student_list[100];
    int choice;
    do {
        printf("1.nhap\n");
        printf("2.input into file\n");
        printf("3.output to file\n");
        printf("4.thoat\n");
        printf("nhap lua chon");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("nhap vao so hoc sinh:");
                scanf("%d",&n);
                for (int i=0;i<n;i++){
                    input(&student_list[i]);
                }
                break;
            case 2:
                input_file(student_list, n);
                break;
            case 3: 
                output_file(student_list,n);
                for (int i=0;i<n;i++)
                    output(&student_list[i]);
                break;
            case 4:
                printf("thoat\n");
                break;
            default:
                printf("thoat\n");
                break;
        }
    } while (choice != 4);
}