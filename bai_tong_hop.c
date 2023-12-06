#include<stdio.h>
#include<string.h>
struct Books {
    int book_id;
    char book_name[100];
    char author[100];
    long price;
    char category[100]; 
};
typedef struct Books book;
void input(book *temp){
    printf("nhap ma sach:");
    scanf("%d",&temp->book_id);
    printf("nhap ten sach:");
    getchar();
    gets(temp->book_name);
    printf("nhap tac gia:");
    getchar();
    gets(temp->author);
    printf("nhap gia:");
    scanf("%d",&temp->price);
    printf("nhap the loai:");
    getchar();
    gets(temp->category);
}
void output( book *temp){
    printf("ma sach:%d, ten sach:%s, tac gia:%s, gia tien:%d, the loai:%s\n",temp->book_id, temp->book_name, temp->author, temp->price, temp->category);
}
void input_file(book list[], int n){
    FILE *f;
    f = fopen("books.txt","wb");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    for (int i=0;i<n;i++){
        fwrite(&list[i], sizeof(book), 1, f);
    }
    fclose(f);
}
void output_file(book list[], int n){
    FILE *f;
    f = fopen("books.txt","rb");
    if (f == NULL) {
        printf("khong the mo file");
        exit(0);
    }
    for (int i=0;i<n;i++){
        fread(&list[i], sizeof(book), 1, f);
    }
    fclose(f);
}
int main(){
    int n;
    book book_list[100];
    int choice;
    do {
        printf("1.nhap\n");
        printf("2.input into file\n");
        printf("3.output to file\n");
        printf("4.thoat\n");
        printf("nhap lua chon:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("nhap vao so sach:");
                scanf("%d",&n);
                for (int i=0;i<n;i++){
                    input(&book_list[i]);
                }
                break;
            case 2:
                input_file(book_list, n);
                break;
            case 3: 
                output_file(book_list,n);
                for (int i=0;i<n;i++)
                    output(&book_list[i]);
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