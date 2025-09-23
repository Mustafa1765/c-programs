#include<stdio.h>
void main()
{
    int n;
    int  fact = 1;
    printf("input the no : ");
    scanf("%d",&n);
    if(1<=n<=10)
    {
        for(int i =0;i<n;i++)
        {
            fact = fact * (i+1);
        }
    }
    printf("Factorial of %d is %d",n,fact);
}