#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

/* Equation of the line f(x) = x^3-4x-9 */
float f(float x)
{
    return (x * x * x - 4 * x - 9);
}

int main()
{
    int i, n, j;
    float x1, x[10], y[10], sum, prod;

    // clrscr();

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of x and y [%d][%d]:", i, i);
        scanf("%f%f", &x[i], &y[i]);
    }

    printf("Enter two value for which y to determine:\n");
    scanf("%f", &x1);

    for (i = 0; i < n; i++)
    {
        prod = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)

                prod = prod * (x1 - x[j]) / (x[i] - x[j]);
        }

        sum = sum + prod * y[i];
    }

    printf("The sum is: %f", sum);

    // getch();

    return 0;
}