#include<stdio.h>
struct employee
{
char name[20];
int employeeID;
};
void main()
{
struct employe E[10];
int i,n;
printf("enter the number of employees");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the name");
scanf("%s",E[i].name);
