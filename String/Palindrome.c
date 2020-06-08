#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char str1[30];
    scanf("%s",str1);
    char str2[30];

    i=0;
    len=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
         str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("\n%s",str1);
    printf("\n%s",str2);

    int d=strcmp(str1,str2);

    if(d==0)
    {
        printf("\nPalindrome");

    }
    else
    {
        printf("\nNot Palindrome");
    }
}