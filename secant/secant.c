#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include <conio.h>

float f(float x){
    return (x*x*x-6*x+4);
}

int main(){
    int i,n;
    float a,b,c;

    // clrscr();

    printf("Enter two values where the root lies:");
    scanf("%f%f",&a,&b);

    do{
        c = (a*f(b)-b*f(a)) /(f(b)-f(a));
        
        a=b;
        b=c;
    }while(f(c)!=0);

    printf("The required root is: %f" ,c);
    // getch();

    return 0;
}