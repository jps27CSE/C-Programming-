#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("file does not exist ");

    }
    else
    {
        printf("File is open\n");

        fscanf(file,"%s\n",&name);

        printf("%s\n",name);
        
        fclose(file);
    }
    
}