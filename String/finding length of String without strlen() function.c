#include<stdio.h>
int main()
{
    char s1[]="Jack Pritom Soren";

    int i=0,length=0;

    while(s1[i]!='\0')
    {
        i++;
        length++;
    }
    printf("%d",length);

}
