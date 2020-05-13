#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    file=fopen("test.txt","a");

    if(file==NULL)
    {
        printf("file does not exist ");

    }
    else
    {
        printf("File is open\n");
        printf("Enter your Full Name =");
        gets(name);

        printf("Enter your Age =");
        scanf("%d",&age);

        fprintf(file,"%s %d\n",name,age);
    
        

        printf("file is written succesfully\n");
        fclose(file);
    }
    
}