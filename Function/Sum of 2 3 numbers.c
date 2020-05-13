#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
void minus(int a,int b)
{

    printf("%d",a-b);
}

int main()
{
    int num1,num2;
    printf("Enter your Numbers");

    scanf("%d %d",&num1,&num2);


    printf("%d\n",sum(num1,num2));

    minus(20,10);
}
