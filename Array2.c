// Write a program to find the sum of all elements of an array.
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}