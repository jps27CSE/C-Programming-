#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    file=fopen("test.txt","w");

    if(file==NULL)
    {
        printf("file does not exist ");

    }
    else
    {
        printf("File is open\n");
        printf("Enter your Full Name =");

        gets(name);
        fputs(name,file);

        printf("file is written succesfully\n");
        fclose(file);
    }
    
}