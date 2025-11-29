// Write a program to find the largest element in an array.
#include <stdio.h>
int main()
{
    int a[5] = {100, 20, 30, 40, 50};
    int largest = a[0];
    
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("Largest Numder is: %d", largest);
    return 0;
}