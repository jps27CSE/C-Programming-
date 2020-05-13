#include<stdio.h>
int main()
{
    FILE *file;

    file=fopen("test.txt","w");

    if(file==NULL)
    printf("file does not exist");

    else
    {
        printf("file is opened");
        fclose(file);
    }
    
}