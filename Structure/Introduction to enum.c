#include<stdio.h>

enum days_of_week
{
    sun,mon,tue,wed,thus,fri,sat

};


int main()
{
    enum days_of_week day1,day2;

    day1=sat;
    printf("%d\n",day1);

}