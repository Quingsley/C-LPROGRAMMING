/*even and odd numbers*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter the value of a: \n");
    scanf("%d",&x);
    if(x%2 == 0)
        printf("%d is an even number  \n",x);
    else
        printf("%d is odd \n",x);
    return 0;
}
