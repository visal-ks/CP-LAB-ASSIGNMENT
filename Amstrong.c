#include<stdio.h>

void  main()
{
    int amst,n,copy;
    printf("Enter the number");
    scanf("%d",&n);
    copy=n;

    for(amst=0;n>0;)
    {
       amst=amst+(n%10)*(n%10)*(n%10);
        n=n/10;
     }
        if(copy==amst)
        {
            printf("The number is an amstrong");
            
        }
        else
         
        {
            printf("The number is not an amstrong");
            
        }
    
    
}
    