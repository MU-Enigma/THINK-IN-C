#include<stdio.h>
int factorial(int a)
{
    if (a<1)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a-1));
    }
}

int main()
{
    int a,fact;
    printf("Enter the number for which you need factorial\n");
    scanf("%d",&a);
    fact=factorial(a);
    printf("The factorial of %d is %d\n",a,fact);
    return 0;
}
