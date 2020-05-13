#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]=" Partho Ponuel Soren";
    int length;
    length=strlen(name);
    int i;


    file=fopen("test.txt","a");

    if(file==NULL)
    printf("file does not exist");

    else
    {
        printf("file is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);
    }
    
}