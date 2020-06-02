#include<stdio.h>

int recursion(int n)
{
    int sum;
    if(n==0)
    {
        return 0;
    }

    return n+recursion(n-1);
}

int main()
{
    int num;

    scanf("%d",&num);

    printf("%d",recursion(num));
}