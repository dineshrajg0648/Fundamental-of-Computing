// Summing up squares of Odd numbers

#include <stdio.h>

int main() 
{
    int n;
    int sum = 0;
    printf("Enter n value : ");
    scanf("%d", &n);
    if (n > 0) 
        {for (int i = 1; i <= n; i += 2) 
            {sum += i * i;}
            printf("Sum of the squares of odd numbers up to %d is %d\n", n, sum);}
    else 
        {printf("Please enter a positive integer.\n");}
    return 0;
}
