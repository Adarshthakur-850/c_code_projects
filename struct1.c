#include<stdio.h>
struct book
{
    char name[20];
    int pages ;
    float price;
};
int main()
{

    int i ;
    struct book b1;
    ///printf("\n Size of book Structure is %d:", sizeof(book));

    printf("\n Size of book Structure is %d:", sizeof(b1));
    printf("\n Enter name , pages and price   \n");

    scanf("%c%d%f", &b1.name, &b1.pages,&b1.price );
    printf("\n Entered values are : ");
    printf("\n Name : %S", b1.name);
    printf("\n pages : %S", b1.pages);
    printf("\n price : %S", b1.price);

}
