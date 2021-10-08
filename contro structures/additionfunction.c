/*addition*/
#include<stdio.h>
#include<conio.h>
int addition(int,int);
int main()
{
    int a,b,sum;
    printf("enter two numbers a,b: ");
    scanf("%d%d\n",&a,&b);
    sum =addition(a,b);
    printf("sum = %d \n",sum);
    return 0;
}
int addition( x,y)
{
    int add;
    add = x + y;
    return add;
}
