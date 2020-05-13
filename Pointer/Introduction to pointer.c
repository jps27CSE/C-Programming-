#include<stdio.h>
int main()
{

int x=5;
int *ptr; //pointer declaration 

ptr=&x;

printf("%d\n",x);
printf("%d\n",&x);
printf("%d\n",ptr);

printf("%d\n",*ptr);

printf("%d\n",&ptr);







}