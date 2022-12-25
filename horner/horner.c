#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int main()
{
    int i, x, n, p, a[10];

    // clrscr();

    printf("Enter the degree of polynomial:\n");
    scanf("%d", &n);

    printf("Enter the coefficent:\n");
    for (i = n; i >= 0; i--)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the point of evaluation value:\n");
    scanf("%d", &x);
    p = a[n];

    for (i = n - 1; i >= 0; i--)
    {
        p = p * x + a[i];
    }

    printf("The required value is %d", p);

    // getch();

    return 0;
}