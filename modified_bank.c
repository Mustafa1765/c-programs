#include<stdio.h>
static int  currentbalance = 1000;
void great()
{
    printf("Welcome to SBI Bank .......!");

}
int deposit(int amount)
{
    currentbalance = currentbalance + amount;
}
int credit(int amount)
{
    currentbalance = currentbalance - amount;

}
int returnbalance(int amount)
{
return currentbalance;
}
 void close()
{
printf("Thanks for using  SBI...! \n visit again.**");
}
void main()
{
    great();
    //currentbalance();
printf("\nThe basic amount u have is : %d\n",currentbalance);
deposit(500);
printf("now the balance is : %d\n",currentbalance);
credit(100);
printf("now the balance is : %d\n",currentbalance);
returnbalance(currentbalance);
printf("now the balance is : %d\n",currentbalance);
close();
}
