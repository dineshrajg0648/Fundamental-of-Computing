// Summing up series 1 + 2 + 3 + 4….. +n

#include <stdio.h>

int main() 
{
    int n, sum = 0;
    printf("Enter n value : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
        {sum += i;}
    printf("Sum of the series 1 + 2 + 3 + ... + %d = %d\n", n, sum);
    return 0;
}
