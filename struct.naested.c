#include<stdio.h>
struct employee
{
    char ename[20];
    int ssn;
    float salary;
    struct date
    {
    int date;
    int month;
    int year;
    }doj;
};///emp =("pritesh",1000,100000.50,(22,6,2030));
int main()
{
    struct employee emp;
    printf("enter the name,ssn,salary: ");
    scanf("%s%d%f",&emp.ename,&emp.ssn,&emp.salary);
    printf("enter the date month and year of joining: ");
    scanf("%d%d%d",&emp.doj.date,&emp.doj.month,&emp.doj.year);
    printf("employee name: %s",emp.ename);
    printf("employee ssn: %d",emp.ssn);
    printf("employee salary: %f",emp.salary);
    printf("employee doj: %d/%d/%d",emp.doj.date,emp.doj.month,emp.doj.year);
    return 0;
}
