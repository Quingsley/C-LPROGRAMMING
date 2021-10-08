/*STRONG NUMBER DEMO using functions*/
#include <stdio.h>
#include <conio.h>
int fact (int val);
int main()
{
    int n,temp,digit,sum;
    printf("Enter a number:",n);
    scanf("%d",&n);
    temp=n;
    sum=0;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum + fact(digit);
        temp=temp/10;
    }
   if(sum==n)
   {
       printf("%d is a strong number",n);
   }

   else
   {
     printf("%d is not a strong number",n);
   }

   return 0;
}
int fact(int val)
{
    int a,b=1;
    for(a=1;a<=val;a++)
    {
      b=b*a;
    }
    return b;
}






