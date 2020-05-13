#include<stdio.h>

int main()

{
    int i,j,number1,number2;

    int A[10][10],B[10][10],C[10][10];

    printf("Enter the Number of Rows and Cols :");

    scanf("%d %d",&number1,&number2);

    printf("\nEnter your Element of A matrix \n");
    for(i=0;i<number1;i++)
    {
        for(j=0;j<number2;j++)
        {
            printf("A [%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     printf("Enter your Element B Matrix \n");
    for(i=0;i<number1;i++)
    {
        for(j=0;j<number2;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A= ");
    for(i=0;i<number1;i++)
    {
        printf("\t");
        for(j=0;j<number2;j++)
        {
           printf("%d",A[i][j]);
        }
        printf("\n");
    }



    printf("B= ");
    for(i=0;i<number1;i++)
    {
        printf("\t");
        for(j=0;j<number2;j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<number1;i++)
    {
        for(j=0;j<number2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }

printf("\A+B= ");
    for(i=0;i<number1;i++)
    {
        printf("\t");
        for(j=0;j<number2;j++)
        {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }

}
