#include <stdio.h>

/*
 * Simple Calculator
 * Hello Math world 
 */ 

int main(void)
{ 
	int choice, input1, input2;

	printf("Calculator Application\n\n");
	
	do{
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Mul\n");
	printf("4. Div\n");
	printf("0. Quit\n");
	printf("Choice");
        scanf("%d ,&choice")

	switch (choice)
	{
		case 1: printf("Num1:");
			scanf("%d" ,&input1);
			printf("Num2:");
			scanf("%d" ,&input2);
			printf("%d + %d = %d" ,input1, input2, input1+input2);
                    break;

		case 2:printf("Num1:");
                        scanf("%d" ,&input1);
                        printf("Num2:");
                        scanf("%d" ,&input2);
                        printf("%d - %d = %d" ,input1, input2, input1-input2);
                    break;

		case 3:printf("Num1:");
                        scanf("%d" ,&input1);
                        printf("Num2:");
                        scanf("%d" ,&input2);
                        printf("%d * %d = %d" ,input1, input2, input1*input2);
		       	break;

		case 4:printf("Num1:");
                        scanf("%d" ,&input1);
                        printf("Num2:");
                        scanf("%d" ,&input2);
                        printf("%d / %d = %.2f\n\n" ,input1, (float)input2, input1/input2);
                    break;

	       case 0; printf("\nBye!\n");
	            break;
               defalt:printf("\nInvalid Input!\n");

	} while(choice i= 4);

	return 0;
}
