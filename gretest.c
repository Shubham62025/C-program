#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value of a\n");
	scanf("%d" ,&a);
		printf("enter a value of b\n");
	scanf("%d" ,&b);
		printf("enter a value of c\n");
	scanf("%d" ,&c);
	if(a>b && a>c)
	{
		printf("a is gretest number");
	}
	if(b>a && c>a)
	{
	printf("b is gretest number");
    }
if(c>a && c>b)
{
	printf("c is gretest number");
}
	return 0;
}

