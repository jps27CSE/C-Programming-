#include<stdio.h>
int main()
{
    char str1[50]="Jack Pritom Soren";
    char str2[]=" Thank you So much";

    int i=0,j=0,c=0;

    while(str1[i]!='\0')
    {
        i++;
        j++;
    }
    while(str2[c]!='\0')
    {
        str1[j+c]=str2[c];
        c++;
    }

    printf("String = %s",str1);
}

