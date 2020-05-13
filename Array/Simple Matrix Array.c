#include<stdio.h>

int main()

{
    int i,j;

    int A[3][4],B[3][4];
    //Scanning a Matrix
    printf("Enter your Element of A Matrix :\n \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Printing a Matrix

    printf("A= ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

     //Scanning a Matrix
    printf("Enter your Element of B Matrix :\n \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing a Matrix

    printf("B= ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {

            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}
