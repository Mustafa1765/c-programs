#include<stdio.h>
int main(){
	int n,r,sum=0,temp;
	scanf("%d",&n);

	temp=n;
	while (n>0)
		{
			sum=sum*10+n%10;
			n/=10;
		}
	if(temp==sum){
		printf("%d is a palindrome.",temp);
	}
	else
		{
		printf("%d is not a palindrome.",temp); 
		}
return 0;
}
