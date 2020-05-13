#include<stdio.h>

double result(double b,double h)
{
   return .5*b*h;
}




int main()

{

    double a,c;

    printf("Enter Base and Height =");
    scanf("%lf %lf",&a,&c);

    double sum=result(a,c);

    printf("%lf",sum);

}
