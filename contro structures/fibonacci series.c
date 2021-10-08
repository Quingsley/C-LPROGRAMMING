/* fibonacci series */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0, f=0, s=1, n=0 ;
    for(i=0; i<10; i++)
    {
        if(i<=1)
        {
             n=i;
            printf("%d \n",n);

        }

        else
        {
                n=f+s;
                f=s;
                s=n;
                printf("%d \n",n);
        }

    }
    return 0;
}

