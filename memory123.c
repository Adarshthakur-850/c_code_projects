#include<stdio.h>

int main()
{ struct book
{
    char name[25];
    char author[25] ;
    int id;
};

    struct book b1 = {"Let us c", "hukam", 101};
    struct book *ptr;
    ptr = &b1;
    ///printf("\n Size of book Structure is %d:", sizeof(book));

    printf("%s %s %d\n", b1.name, b1.author,b1.id );

    printf("%s %s %d\n", ptr->name, ptr->author,ptr->id );
    //printf("%s %s %d\n", ptr.name, ptr.author,ptr->id );
    printf("%s %s %d\n", (*ptr).name,(*ptr).author,ptr->id );


    return 0;

}
