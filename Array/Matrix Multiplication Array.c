#include<stdio.h>

int main()

{
    int A[10][10],B[10][10],Result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter your Row and Column for First Matrix =  ");

    scanf("%d %d",&r1,&c1);

    printf("Enter your Row and Column for Second Matrix = ");

    scanf("%d %d",&r2,&c2);

    while (c1!=r2)
    {
        printf("Error !! \n");
        printf("Column of First Matrix not equal to Row of Second Matrix \n");
        printf("Enter your Row and Column for First Matrix =  ");

        scanf("%d %d",&r1,&c1);

        printf("Enter your Row and Column for Second Matrix = ");

        scanf("%d %d",&r2,&c2);

    }
    printf("Enter Elements of First Matrix = \n");

    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
             printf("A[%d][%d] ",i,j);
            scanf("%d",&A[i][j]);
        }

    }
    printf("Enter Elements of Second Matrix = \n");

    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
              printf("B[%d][%d] ",i,j);
            scanf("%d",&B[i][j]);
        }

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+A[i][k]*B[k][j];


            }
            result[i][j]=sum;
            sum=0;
        }
    }

printf("\n First Matrix\n");
    for(i=0;i<r1;i++)
    {printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d",A[i][j]);

        }
         printf("\n");

    }
printf("\n Second Matrix \n");
    for(i=0;i<r2;i++)
    { printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d",B[i][j]);


        }
        printf("\n");

    }





}
