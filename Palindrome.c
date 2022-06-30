#include <stdio.h>
int main()
{
	int n,reversed,remainder,actual;
	printf("Enter an integer:");
	scanf("%d", &n);
	actual=n;
	while (n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	if (actual==reversed)
	{
		printf("%d is a palindrome.", actual);
	}
	else 
	{
		printf("%d is not a palindrome.", actual);
	}
	return 0;
}
