#include<stdio.h>

//Global Structure

struct person
{
    int age;
    float salary;
};


int main()
{
    struct person person1,person2,person3;

    printf("Enter Information of Person 1\n");

    printf("Enter your Age");
    scanf("%d",&person1.age);

    printf("\nEnter your Salary");
    scanf("%f",&person1.salary);


    printf("Age =%d\n",person1.age);
    printf("Salary =%f\n",person1.salary);


    printf("Enter Information of Person 2\n");

    printf("Enter your Age");
    scanf("%d",&person2.age);

    printf("\nEnter your Salary");
    scanf("%f",&person2.salary);


    printf("Age =%d\n",person2.age);
    printf("Salary =%f\n",person2.salary);


    printf("Enter Information of Person 3\n");

    printf("Enter your Age");
    scanf("%d",&person3.age);

    printf("\nEnter your Salary");
    scanf("%f",&person3.salary);


    printf("Age =%d\n",person3.age);
    printf("Salary =%f\n",person3.salary);





}

