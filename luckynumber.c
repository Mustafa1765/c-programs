#include<stdio.h>
void main()
{
    int num[4],sum = 0,i,a;
    printf("Enter the car no: ");
    scanf("%d",&a);    
    if(a>1000  || a<=9999){
    for( i=0;i<4;i++)
    {  
        //printf("%d",num[i]);
     sum = sum+num[i];
//printf("%d",sum);
    }
    //printf("%d",sum);
   if(sum%3==0||sum%5==0||sum%7==0)
    {
        printf("lucky number");
    }
    else 
    {
    
        printf("not a lucky number");
    }
}
    else
    {
        printf("Invalid numbert");
    
    }

}