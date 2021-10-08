/*SWITCH CASE DEMO PROGRAM*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int l,w,p;
    int a,b,s,choice;
    printf("MAIN MENU \n");
    printf("1.PERIMETER \n");
    printf("2.SUM \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the length,width: \n");
        scanf("%d%d",&l,&w);
        p=2*(l+w);
        printf("The perimeter is: %d",p);
        break;

    case 2:
        printf("Enter the two numbers a,b \n");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("the sum is: %d",s);
        break;
    default:
        printf("Invalid option!!");
        break;
    }
 return 0;


}
