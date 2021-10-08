/*sorting*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i, no, age[10],temp,j;
printf("enter size of array:\n");
scanf("%d",&no);
printf("initialize the array\n");
for(i=0;i<no;i++)
{
    scanf("%d",&age[i]);
}
printf("sorting process starts here\n");
for(i=0;i<no;i++)
{
    for(j=i+1;j<no;j++)
    {
        if(age[i] > age[j])
        {
            temp = age[i];
            age[i] = age[j];
            age[j] = temp;
        }
    }
}
printf("\n sorted elements are:\n");
for(i=0;i<no;i++)
{
   printf("\n%d\n",age[i]);
}

return 0;
}

