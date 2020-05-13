#include<stdio.h>

void display(char str1[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        printf("%c\n",str1[i]);
        i++;
    }
}



int main()
{
    char str[]="Jack Pritom Soren";

    display(str);

}
