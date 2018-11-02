#include<stdio.h>
#include<stdlib.h>
void addition()
{
	int num1, num2;
	printf("Enter the two numbers with space between them: \n");
	scanf("%d %d",&num1,&num2);
	printf("%d\n",num1+num2);
}
void subtraction()
{
    int num1, num2;
    printf("Enter the two numbers with space between them: \n");
	scanf("%d %d",&num1,&num2);
	printf("%d\n",num1+num2);
}
void multiplication()
{
    int num1, num2;
    printf("Enter the two numbers with space between them: \n");
	scanf("%d %d",&num1,&num2);
	printf("%d\n",num1*num2);
}
void division()
{
    float num1, num2;
    printf("Enter the two numbers with space between them: \n");
	scanf("%f %f",&num1,&num2);
	printf("%f\n",num1/num2);
}
int main()
{
	int choice;
	printf("----------Darklord's Calculator----------\n");
	printf("=========================================\n");
	printf("Operations available\n");
	printf("1). Addition\n");
	printf("2). Subtraction\n");
	printf("3). Multiplication\n");
	printf("4). Division\n");
	printf("Enter your choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		{
			addition();
			break;
		}
		case 2:
		{
			subtraction();
			break;
		}
		case 3:
		{
			multiplication();
			break;
		}
		case 4:
		{
			division();
			break;
		}
		default:
		{	
			printf("please enter a valid choice:\n");
			break;
		}	
	}
	return 0;
}


