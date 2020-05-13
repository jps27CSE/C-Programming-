#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("file does not exist ");

    }
    else
    {
        printf("File is open\n");
       
       while(!feof(file))
       {
          fgets(ch,39,file);
          printf("%s\n",ch);
       }
        fclose(file);
    }
    
}