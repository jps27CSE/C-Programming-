#include<stdio.h>
int main()
{
    FILE *file;
    
    char name[20];

    int age,phonenumber,num,i;

    file=fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is open\n");

        printf("Enter number of Students =");

        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            printf("Enter Student Name =");
            scanf("%s",&name); 

            printf("Enter Age =");
            scanf("%d",&age);

            printf("Enter Student Phone Number =");
            scanf("%d",&phonenumber);

            fprintf(file,"\n%s \t\t%d\t%d\n",name,age,phonenumber);
        }

        fclose(file);

    }
    
}