#include <stdio.h>
#include <conio.h>
int main()
{
    int count = 0, n,i, unique[5];
    while (count < 5)
    {
        printf("Enter a number:\n");
        scanf("%d", &n);
        i = 0;
        for (; i < count; i++)
        {
            if (n == unique[i])
            {
                printf("Number already exist!\n");
                break;
            }
        }
        if (i == count)
        {
            unique[count] = n;
            count++;
        }


    }
    printf("The unique numbers are:\n");
    for(int j=0;j<5;j++)
        {
            printf("%d\n",unique[j]);

        }
    return 0;
}
