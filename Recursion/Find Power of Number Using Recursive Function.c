#include<stdio.h>
#include<stdlib.h>

void function(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int result=x*pow(x,n-1);
    printf("%d",result);
}


int main()
{  
    int x,y;

    x=5;
    y=4;
    
    function(x,y);


}