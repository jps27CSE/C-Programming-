#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;

    int *ptr;

    ptr=&x;

    printf("X =%d\n",*ptr);

    ptr=&y;

    printf("X =%d\n",*ptr);

    ptr=&z;

    printf("X =%d\n",*ptr);



}