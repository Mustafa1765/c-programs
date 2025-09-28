// c to f = >f = (c*1.8)+32
// f to c = > c = (f-32)/1.8
#include<stdio.h>
int main(){
	int choice;
	float temp;
	printf("Temperature Conversion:\n");
	printf("1.Celsius to Fahrenheit\n");
	printf("2.Fahrenheit to Celsius\n");
	printf("choice: ");
	scanf("%d",&choice);
	
	if(choice ==1)
	{
		printf("Enter Temperature in Celsius: ");
	scanf("%f",&temp);
	printf("Fahrenheit Temperature: %.2f\n",temp*);
	}	else if(choice == 2)
		
		printf("Enter Temperature in Fahrenheit: ");
		scanf("%f",&temp);
		printf("Celsius Temperature: %.2f\n")
		}
		else 
		printf("Invalid choice\n");
	}
