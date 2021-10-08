/*searching*/
#include<stdio.h>
#include<conio.h>
int main()
{
int flag=0,i, key, a[5];
printf("initialize the array:\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element to search:\n");
scanf("%d",&key);
for(i=0;i<5;i++)
{
	if(key==a[i])
	{
		printf("element found\n");
		printf("loc = %d\n",i);
		printf("element is %d\n",a[i]);
		flag=1;
		break;
	}
}
if(flag==0)
    printf("element not found\n");
return 0;
}


