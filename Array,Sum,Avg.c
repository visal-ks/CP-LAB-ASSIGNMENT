#include<stdio.h>
void main()
{
    int N,sum=0,i,avg=0
   ;
    int a[N];
    printf("Enter the number of values to be stored (N)");
    scanf("%d",&N);
     
    for(i=0;i<N;i++)
    {
         printf("Enter the Element");
         scanf("%d",&a[i]);

    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];
        avg=sum/N;
       
    }
    printf("sum is %d",sum);
    printf("Average is %d",avg);
    }