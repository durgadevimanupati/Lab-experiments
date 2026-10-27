#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    if (n >= 0)
        printf("Square root = %.2f\n", sqrt(n));
    else
        printf("Square root of a negative number is not real.\n");

    return 0;
}