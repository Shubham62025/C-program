#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter number");
scanf("%d" ,&n);
for(i=1; i<=n; i++)
{
    for(j=1; j<=n; j++)
    {
        if (j==1&&i==2 || j==2&&i==2)
        {
            printf(" ");
        }
        else{
            printf("*");
        }
    }
    printf("\n");
}
return 0;
}