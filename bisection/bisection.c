#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

/* Equation of the line f(x) = x^3-4x-9 */
float f(float x){
    return (x*x*x-4*x-9);
}

int main(){
    int i,n;
    float a,b,c;

    // clrscr();

    printf("Enter the no of iteration:\n");
    scanf("%d",&n);

    printf("Enter two values where the root lies:\n");
    scanf("%f%f",&a,&b);

    if(f(a)*f(b) >0){
        printf("The initial values are out of the range");
        // getch();
        exit(0);
    }

    for (i=0; i<n; i++){
        c = (a + b) / 2;

        if (f(c) ==0 ){
            break;
        } else if( f(a) * f(c) < 0){
            b=c;
        }else{
            a=c;
        }
    }

    printf("The required root is: %f" ,c);

    return 0;
}