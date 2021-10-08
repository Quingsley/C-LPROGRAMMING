/* MATRIX ADDITION*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,matrixA[2][2], matrixB[2][2], matrixC[2][2];
    printf("Initialize the matrixA\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("\nInitialize the matrixB\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    printf("\nAdd matrix is\n");
    for(i=0;i<2;i++)  {
        for(j=0;j<2;j++)
        {
            printf("%d\t",matrixA[i][j] + 	matrixB[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

