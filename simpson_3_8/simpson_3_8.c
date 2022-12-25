#include <stdio.h>
#include <stdlib.h>
// #include<conio.h>

float f(float x)
{
    return 1 / (1 + x * x);
}

int main()
{
    float upper, lower, sum, stepSize;
    int i, interval;

    // clrscr();

    printf("Enter the no of interval:\n");
    scanf("%d", &interval);

    printf("Enter lower limit: \n");
    scanf("%f", &lower);

    printf("Enter upper limit: \n");
    scanf("%f", &upper);

    stepSize = (upper - lower) / interval;

    sum = f(lower) + f(upper);
    for (i = 1; i < interval; i++)
    {
        if (i % 3 == 0)
        {
            sum += 2 * f(lower + i * stepSize);
        }
        else
        {
            sum += 3 * f(lower + i * stepSize);
        }
    }

    sum = (3*stepSize / 8) * sum;
    printf("The integration is: %f", sum);

    // getch();
    return 0;
}