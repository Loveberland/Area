#include "stdio.h"
#include "area.h"

void square()
{
	double m,n;
	printf("Enter your width ===> ");
	scanf("%lf",&m);
	printf("Enter your height ===> ");
	scanf("%lf",&n);	
	printf("This is your answer ===> %f\nFinish!!\n",m*n);
}

void triangle()
{
	double m,n;
	printf("Enter your width ===> ");
	scanf("%lf",&m);
	printf("Enter your height ===> ");
	scanf("%lf",&n);	
	printf("This is your answer ===> %f\nFinish!!\n",.5*m*n);
}

void curcle()
{
	double r;
	printf("Enter your radias ===> ");
	scanf("%lf",&r);
	printf("This is your answer ===> %f\nFinish!!\n",3.14*r*r);
}
