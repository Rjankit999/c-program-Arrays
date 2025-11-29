// Write a program to reverse an array.
#include <stdio.h>
int main()
{
    int a[7] = {15, 31, 80, 20, 30, 41, 50};
    int b[7];
    int j = 0;
    for (int i = 6; i >= 0; i--)
    {

        b[j] = a[i];
        j++;
    }
    for (int i = 0; i <7; i++)
    printf("%d \n", b[i]);
}