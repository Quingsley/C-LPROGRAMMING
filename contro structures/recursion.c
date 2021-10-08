/*factorial using recursion */
#include <stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int a,fact;
    printf("enter a value: ");
    scanf("%d",&a);
    fact=factorial(a);
    printf("\n %d! = %d",a,fact);
    return 0;
}
int factorial(int x)
{
  int res=1;
  if(x==0)
        return res;
  else if(x==1)
    return res;
  else
    res=res*x*factorial(x-1);
    return res;
}
