#include <stdio.h>
#include <conio.h>
int main()
{
    int count = 0, n, unique[i];
    while (count < 5)
    {
        prrintf("Enter a number: ");
        scanf("%d", &n);
        i = 0;
        for (i; i < count; i++)
        {
            if (n == unique[i])
            {
                break;
            }
        }
        if (i == count)
        {
            unique[count] = n;
            count++;
        }
    }
}