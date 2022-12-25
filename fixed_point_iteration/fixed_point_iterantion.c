#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include <conio.h>

float g(float x){
    return (sqrt(2*x+8));
}

int main(){
    int i,n;
    float a,b,c;
    float x0,x1;

    // clrscr();

    printf("Enter the no of iteration:\n");
    scanf("%d",&n);

    printf("Enter the inital value:\n");
    scanf("%f",&x0);

    for (i=0; i<n; i++){
        x1 = g(x0);
        x0=x1;
    }

    printf("The required root is: %f" ,x1);
    // getch();

    return 0;
}