/*Nested if program */
#include <stdio.h>
#include <conio.h>

main()
{
    int marks;
    char Name[10];
    printf("enter students name: \n");
    scanf("%s",&Name);
    printf("enter students marks: \n");
    scanf("%d",&marks);
if(marks>100)
        printf("marks=beyond range");
     else if(marks>69)
        printf("Grade=A \n");
     else if(marks>59)
        printf("Grade=B \n");
     else if(marks>49)
         printf("Grade=C \n");
     else if(marks>39)
         printf("Grade=D \n");
     else if(marks>=0)
         printf("Grade= E \n");
else
    printf("Invalid Marks \n");


return 0;

}
