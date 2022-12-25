#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <math.h>

float f(float x)
{
    return exp(x);
}

int main()
{
    float lower, upper, stepSize, sum = 0.0;
    int n, i;

    // clrscr();

    printf("Enter the no of interval:\n");
    scanf("%d", &n);

    printf("Enter the lower limit:\n");
    scanf("%f", &lower);
    printf("Enter the upper limit:\n");
    scanf("%f", &upper);

    stepSize = (upper - lower) / n;
    sum = f(lower) + f(upper);

    for (i = 1; i < n; i++)
    {
        sum += 2 * f(lower + i * stepSize);
    }

    sum = (stepSize / 2) * sum;

    printf("The integration is : %f", sum);

    // getch();

    return 0;
}