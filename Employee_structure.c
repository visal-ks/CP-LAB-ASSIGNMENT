#include<stdio.h>

int main()
{
    struct employees
    {
      char name[20];
      int id;
      float salary;
    }em[50];
    int i,n;
    printf("Enter no. of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter the name :");
    scanf("%s",em[i].name);
    printf("%s",em[i].name);
    printf("\nEnter the id");
    scanf("%d",&em[i].id);
    printf("\nEnter the salary");
    scanf("%2f",&em[i].salary);
    }
    for(i=0;i<n;i++)
    {
     printf("\nThe name is %s and the employer Id is %d and the salary is %2f",em[i].name,&em[i].id,&em[i].salary);
    }
 }