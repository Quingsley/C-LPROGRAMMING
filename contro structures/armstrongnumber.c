/*ARMSTRONG NUMBER DEMO*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rem,temp, sum,stdno, endno;
    printf("Input starting number:\t");
    scanf("%d", &stdno);
    printf("Input end number:\t");
    scanf("%d", &endno);
    for(n=stdno; n<=endno;n++)
    {

        temp = n;
        sum = 0;

        while(temp!=0)
        {
            rem=temp%10;
            sum=sum +(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==n)
        {
           printf("%d\n",n);
        }
        else
            continue;

    }


  return 0;
}
