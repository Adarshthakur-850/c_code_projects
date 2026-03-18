#include<stdio.h>
void display();
int main()
{
    display();
    display();
    display();

}
void display()
{
    static int a=5;
    printf("%d",a);
    a+=5;
}
