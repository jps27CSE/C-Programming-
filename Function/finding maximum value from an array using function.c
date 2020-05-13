#include<stdio.h>

int maximum(int x[])
{
    int i;
    int high=x[0];
    for(i=1;i<5;i++)
    {
        if(high<x[i])
            high=x[i];
    }
    return high;
}



int main()
{
    int array[]={10,20,30,40,50};

    int store=maximum(array);

    printf("%d",store);

}

