#include<stdio.h>

int f_calls=0;

int factorial(int n)
{
    f_calls=f_calls+1;

    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;

    scanf("%d",&n);

    if(n<0)
    {
        printf("undefined\n");
        return 0;
    }

    printf("Factorial of %d is %d\n",n,factorial(n));

    printf("Number of function call : %d\n",f_calls);

}