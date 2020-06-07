#include<stdio.h>

void pluse_ten1(int a)
{
    a=a+10;
}

void pluse_ten2(int *a)
{
    *a=(*a)+10;
}

int main()
{
    int a;
    a=5;

    pluse_ten1(a);
    printf("a=%d\n",a);
    pluse_ten2(&a);
    printf("a=%d\n",a);

}