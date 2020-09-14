#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


int main() { 
	double answer, number_one, number_two;
	int operation;

	printf("Menu\n 1.Summation\n 2.Subtraction\n 3.Multiplication\n 4.Division \n");
	
	printf("\nChoose what you need ");
	scanf_s ("%d", &operation);
	
	printf("\nFirst number = ");
	scanf_s("%lf", &number_one);

	printf("Second number = ");
	scanf_s("%lf", &number_two);

	switch (operation)
	{
		case 1:
			printf("\nAnswer is %lf \n", answer = number_one + number_two);
				break;

		case 2:
			printf("\nAnswer is %lf \n", answer = number_one - number_two);
				break;

		case 3:
			printf("\nAnswer is %lf \n", answer = number_one * number_two);
				break;

		case 4:
			printf("\nAnswer is %lf \n", answer =  number_one / number_two);
				break;

		default: -1;
			break;
	}



return 0; 
}