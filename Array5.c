//Write a program to count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int a[7] = {15,31,80, 20, 30, 41, 50};
   int even=0,odd=0;
    
    for (int i = 0; i < 7; i++)
    {
        if (a[i] %2==0)
        {
            even++;
        }
        else
        {
           odd++;
        }
    }
    printf("Totle Even Numder: %d\n",even);
    printf("Totle Odd Numder: %d",odd);
    
    return 0;
}