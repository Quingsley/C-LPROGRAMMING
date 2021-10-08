/*PASS BY VALUE DEMO */
#include<stdio.h>
#include<conio.h>
interchange(int,int);
int main()
{
    int a=3, b=5;
    printf("print actual values\n");
    printf("%d,%d\n",a,b);
    interchange(a,b);
    printf("Print values after interchange\n");
    printf("a=%d,b=%d\n  ",a,b);
    printf("CANNOT CHANGE SINCE PASS BY VALUE DOES NOT SUPPORT IT\n");
}
interchange(x,y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nformal values\n" );
    printf("a=%d\n",x);
    printf("b=%d\n",y);

    return 0;

}
