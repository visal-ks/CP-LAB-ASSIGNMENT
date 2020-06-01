#include<stdio.h>
int Fact(n)
{
    int fact=1,i;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int recursive_fact(int n)
{
    if(n==0||n==1)
      return 1;
    else 
      return n*recursive_fact(n-1);
}
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);    
    printf("factorial of %d by non-recursive function is %d and that of recursive is %d",n,Fact(n),recursive_fact(n));
}