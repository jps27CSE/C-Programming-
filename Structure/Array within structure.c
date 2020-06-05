#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};


int main()
{
    struct person person[4];

    int i;

    for(i=0;i<4;i++)
    {
        printf("\n Enter information of person %d\n",i+1);

        printf("Enter Name : ");

        fflush(stdin);

        gets(person[i].name);

        printf("Enter your Age");

        scanf("%d",&person[i].age);

        printf("Enter your Salary");

        scanf("%f",&person[i].salary);

    }

    for(i=0;i<4;i++)
    {
        printf("\n\nInformation of person %d\n",i+1);

        printf("Name : %s\n",person[0].name);

        printf("your Age %d\n",person[i].age);

        printf("Your Salary %f\n",person[i].salary);

    }


}

