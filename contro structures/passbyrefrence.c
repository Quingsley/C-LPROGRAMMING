/*pass by reference demo */
#include <stdio.h>
#include <conio.h>
int swap(int *x, int *y);
int main()
{
    int a=5 , b=7;
    printf("print original values \n");
    printf("a=%d,\t b=%d\n",a,b);
    swap(&a,&b);
    printf("new values after swapping\n");
    printf("a=%d,\t b=%d\n",a,b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    printf("print formal values\n");
    printf("a=%d\n",*x);
    printf("b=%d\n",*y);
    return 0;

}


