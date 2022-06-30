#include <stdio.h>
#include <math.h>
void main()
{
	 float a,b,c,r1,r2,rpart,ipart,d;
	 printf("Enter the coefficients:");
	 scanf("%f %f %f", &a,&b,&c);
	 if (a!=0)
	 {
	 	d = (b*b)-(4*a*c);
	 	if (d==0)
	 	{
	 		r1 = (-b)/(2*a);
	 		r2 = r1;
	 		printf("The roots are real and equal r1 = %f and r2 = %f", r1,r2);
	 	}
	 	else if(d>0)
	 	{ 
	 		r1 = (-b+sqrt(d))/2*a;
	 		r2 = (-b-sqrt(d))/2*a;
	 		printf("The roots are real and distinct : r1 = %f and r2 = %f", r1,r2);
	 	}
	 	else 
	 	{	 	
	 		rpart = (-b)/2*a;
	 		ipart = (sqrt(-d))/2*a;
	 		printf("The roots are imaginary : r1 = %f + i%f\n", rpart);
	 		printf("r2 = %f - %f", ipart);
	 	}
	 	
	 }
	 else 
	 {
	 	printf("It is not a quadratic equation");
	 }
}
	 
