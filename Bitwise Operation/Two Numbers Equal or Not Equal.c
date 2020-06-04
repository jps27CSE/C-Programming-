#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    if(n^m)
    {
        puts("numbers are not equal\n");
    }

    else 
    {
        puts("Number are equal\n");
    }
    
}