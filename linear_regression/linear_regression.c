#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int main()
{
    int i, n;
    float x[10], y[10], sx = 0.0, sy = 0.0, sx2 = 0.0, sxy = 0.0, a, b;

    // clrscr();

    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of x and y [%d][%d]:", i, i);
        scanf("%f%f", &x[i], &y[i]);
    }

    for (i = 0; i < n; i++)
    {
        sx = sx + x[i];
        sy = sy + y[i];
        sxy = sxy + (x[i] * y[i]);
        sx2 = sx2 + (x[i] * x[i]);
    }

    a = ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    b =  ((sx2*sy)-(sx*sxy))/((n*sx2)-(sx*sx));
    printf("The value of a = %f and b = %f\n",a,b);
    printf("Line equation:\n\t y = %f + %fx",b,a);

    // getch();

    return 0;
}