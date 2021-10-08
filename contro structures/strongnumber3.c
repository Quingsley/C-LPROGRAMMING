/*Strong number using do while loop*/
#include <stdio.h>
#include<conio.h>
int fact(int val);
int main()
{
    int n,temp,rem,sum;
    printf("Enter a number:\t");
    scanf("%d",&n);
    temp=n;
    sum=0;
     do
    {

        rem=temp%10;
        sum=sum+fact(rem);
        temp=temp/10;

    }
     while(temp!=0);
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
        b=b*a;
    return b;
}
