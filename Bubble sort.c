//c program for bubble sort
#include<stdio.h>

void main()
{
    int a[100],n,temp=0,pass,i;
    printf("\nEnter the number of elements to be stored in array");
    scanf("%d",&n);
    printf("\nENTER the elements for the array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("The array is :");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    for(pass=0;pass<n-1;pass++)
    {
       for(i=0;i<n-1;i++)
        {
           if(a[i]>a[i+1])
             {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
             }
        } 
        
     }
    printf("\nThe sorted array is :");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }

}