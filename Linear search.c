#include<stdio.h>

void main()
{
    int N,n,copy,i;
    int a[100];
    printf("Enter the number of values to be stored");
    scanf("%d",&N);
    printf("Enter the values to be searched");
    scanf("%d",&n);
    copy=n;
    for(i=0;i<N;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++)
    {
        if(a[i]==copy)
            printf("The number %d is present at %d position ",a[i],i);
            break;
     }
        if(a[i]!=copy)
            printf("Number not found");
            
    

    
    
}
