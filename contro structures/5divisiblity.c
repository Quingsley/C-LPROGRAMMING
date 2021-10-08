/*To check if a number is divisible by 5 and 11*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);
    if (x % 5 == 0)
        printf("%d  is divisible by  5.\n", x);
    else
        printf("%d is not divisible by 5.\n", x);
    

        return 0;
}
