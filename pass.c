#include<stdio.h>
void main()
{
int p=1234;
int n;
printf("Enter a password: ");
scanf("%d: ",&n);
if(n==p)
{
    printf("correct pass");
}
else
{
    printf("incorrect");
}


}