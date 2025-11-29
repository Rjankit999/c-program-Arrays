// Write a program to input 5 numbers and display them.
#include <stdio.h>
int main()
{
    int arrays[5];
    printf("Entea a Numder: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Entea a Numder%d: ",i);
        scanf("%d", &arrays[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arrays[i]);
    }
    return 0;
}