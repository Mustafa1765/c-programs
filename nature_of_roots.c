#include<stdio.h>
#include<math.h>
int main (){
	float a,b,c,discriminant, root1, root2, realpart,imagpart;
	printf("Enter coefficients a, b and c: ");
	scanf("%f%f%f", &a, &b, &c);

	discriminant = b*b-4*a*c;
	//condition for real  and differnt root
	if(discriminant > 0)
	{
		
		printf("root1 = %.2f and root2 = %.2f",root1,root2);}
	

		// condition for real and same roots
		else if(discriminant == 0)
		{
			root1 = root2  = -b/(2*a);
			printf("root1 = %.2f,root2 = %.2f",root1,root2);
		}
	

			else
			{
			realpart = -b/(2*a);
				imagpart =sqrt(-discriminant)/(2*a);
	       printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi",realpart,imagpart,realpart,imagpart);
			   
			   
			   
			
			   return 0;
			}
}

						
			
		
	
