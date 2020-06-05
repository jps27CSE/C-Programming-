#include<stdio.h>

//Global Structure

struct person
{
    int age;
    float salary;
};

struct person person1,person2,person3; //Global Variable

int main()
{
    struct person //Local Structure
{
    int age;
    float salary;
};
    struct person person1,person2,person3; //Local Variable

    person1.age=30;
    person1.salary=27000;

    printf("Person 1\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%f\n",person1.salary);

    person2.age=24;
    person2.salary=15000;

    printf("\nPerson 2\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%f\n",person2.salary);

     person3.age=20;
    person3.salary=7000;

    printf("\nPerson 3\n");
    printf("Age =%d\n",person3.age);
    printf("Salary =%f\n",person3.salary);



}

