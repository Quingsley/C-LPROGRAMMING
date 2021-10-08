/*TRANSPOSE OF A MATRIX*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,matrixA[3][3];
    printf("Initialize the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Given matrix is\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
            printf("%d\t",matrixA[i][j]);
        }
        printf("\n\n");
    }
    printf("\nTranspose of the matrixA\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrixA[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}
