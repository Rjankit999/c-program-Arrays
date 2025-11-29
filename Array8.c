//Write a program to input 10 numbers and print only the prime numbers.
#include<stdio.h>
int main()
{
   int num[10];
    printf("Enter a 10 Number\n\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter a Number %d \n",i);
        scanf("%d",&num[i]);
    }

    return 0;
}