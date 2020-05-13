#include<stdio.h>

int square(int a)
{
   return  a*a;
}


int main()
{
    int num;

    printf("Enter a Integer number =");

    scanf("%d",&num);

    printf("%d",square(num));




}
