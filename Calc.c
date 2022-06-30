//Program to simulate a simple calculator
#include <stdio.h>
int main()
{
	int num1,num2,sum,res;
	char op;
	printf("Enter an arithmetic operator:");
	scanf("%c", &op);
	printf("Enter two numbers:");
	scanf("%d%d", &num1,&num2);
	if(op=='+')
	{
		sum = num1 + num2;
	}
	else if (op=='-')
	{
		res = num1 - num2;
	}
	else if(op=='*')
	{
		res = num1 * num2;
	}
	else if(op=='/')
	{
		if (num2==0)
		{
			printf("Divide by Zero Error");
		return 1;
		} 
		else
		{
			res = num1 / num2;
		}
	}
	else if(op=='%')
	{
		if (num2==0)
		{
			printf("Divide by Zero Error");
		return 2;
		} 
		else
		{
			res = num1 % num2;
		}
	}	
	else
	{
		printf("Invalid OPerator");
		return 3;
	} 
	printf("%d %c %d = %d",num1,op,num2,sum);
	return 0;
 }
