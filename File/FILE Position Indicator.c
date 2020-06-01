#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("in.txt","r");

    if(fp==NULL)
    {
        perror("FILE is not Found");

        return EXIT_FAILURE;
    }

    int ch;

    ch=fgetc(fp);
    printf("%c\n",(char)ch);
    ch=fgetc(fp);
    printf("%c\n",(char)ch);

    fseek(fp,0,SEEK_SET);
    ch=fgetc(fp);
    printf("%c\n",(char)ch);

    fclose(fp);
}