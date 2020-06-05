#include<stdio.h>

//Global Structure

struct person
{
    int age;
    float salary;
};


int main()
{
    struct person person1={27,55500.50};
    struct person person2,person3;

    //element wise assignment
   person2.age=34;
   person2.salary=24000;

   //structure variable assignment

   person3=person2;

    printf("Age =%d\n",person1.age);
    printf("Salary =%f\n",person1.salary);


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

