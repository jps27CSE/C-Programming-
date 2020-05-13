//Sum of Digits

#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;

    printf ("Enter Your Number :");

    scanf ("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("%d",sum);
}
