#include<stdio.h>
int main()
{
 int i,n;
 printf("input the num (table to be calculated): ");
 scanf("%d",&n);
 if(1<n<=10)
 {
    for(i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
    else
    {
        printf("invalid input");
    }  

  
 return 0;
}
