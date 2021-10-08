/*CHECK FOR PALINDROME NUMBER */
#include <stdio.h>
#include <conio.h>

int main()
{
    int no, num, digit, rev ;
    printf("Enter a no: \n");
    scanf("%d",&no);
    num=no;
    rev=0;
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while(num !=0);
     if(rev==no)
     {
      printf("%d is a Palindrome number \n",no);
     }


     else
     {
       printf("%d is not a Palindrome number \n",no);
     }


   return 0;

}
