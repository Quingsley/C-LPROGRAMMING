/*STRONG NUMBER DEMO USING FOR LOOP*/
#include <stdio.h>
#include<conio.h>
int fact(int val);
int main()
{
    int n,temp,sum,rem,stdno,endno;
    printf("enter starting number:\t");
    scanf("%d",&stdno);
    printf("enter end number:\t");
    scanf("%d",&endno);
    for(n=stdno;n<=endno;n++)
    {
        sum=0;
        for(temp=n;temp!=0;temp=temp/10)
        {
            rem=temp%10;
            sum=sum + fact(rem);
        }
        if(sum==n)
        {
            printf("%d is a strong number\n\n",n);

        }
        else
        {
            continue;
        }
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
