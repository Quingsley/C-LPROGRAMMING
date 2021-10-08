/*BASIC CALCULATOR*/
#include <stdio.h>
#include <conio.h>
int main ()
{
    double num1,num2;
    printf("enter first number: ");
    scanf("%lf", &num1);
    printf("enter second number: ");
    scanf("%lf", &num2);

    printf("Answer is: %f", num1 + num2);

   return 0;

}

