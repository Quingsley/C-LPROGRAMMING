/*perimeter func*/
#include<stdio.h>
#include<conio.h>
int perimeter(int,int);
int main()
{
    int a=4,b=5, P;
    P = perimeter(a,b);
    printf("the perimeter is = %d",P);
    return 0;
}
int perimeter(l,w)
{
    int p;
    p = 2*(l+w);
    return p;
}
