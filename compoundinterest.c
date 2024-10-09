#include<stdio.h>
#include<math.h>
int main()
{
	float CI;
	float p,r,t;
	printf("Enter a value of p,r,n,t\n");
	scanf("%f\n" ,&p);
    scanf("%f\n" ,&r);
    scanf("%f\n" ,&t);
	CI=p*(pow((1+r/100),t));
	printf("the value of amount is %f" ,CI);
	return 0;
}
