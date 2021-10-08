#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{

    int unique_numbers[5],i;
    bool flag = true;


    while(flag)
        {

            for(i;i<5;i++)
            {
                printf("Enter a  number:\n");
                scanf("%d", &unique_numbers[i]);
                 for(int index=0; index< 5;index++)
                {
                    if(i > 0 && unique_numbers[i]== unique_numbers[index])
                    {
                        printf("Number already exists!\n");
                        break;
                    }
                    else
                    {


                    }
                }
            }



    }

    return 0;
}
