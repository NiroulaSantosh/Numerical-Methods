#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include <process.h>
// #include <conio.h>

float f(float x){
    return (x*log10(x)-1.2);
}

int main(){
    int i,n;
    float a,b,c;

    // clrscr();

    printf("Enter the number of iteration:\n");
    scanf("%d",&n);

    printf("Enter two values where the root lies:\n");
    scanf("%f%f",&a,&b);

    if(f(a)*f(b) >0){
        printf("The initial values are out of the range");
        // getch();
        exit(0);
    }

    for(i=0; i<n; i++){
        c = (a*f(b)-b*f(a)) / (f(b)-f(a));

        if(f(c) == 0){
            break;
        }else if(f(a)*f(c) < 0){
            b = c;
        }else{
            a = c;
        }
    }

    printf("The required root is: %f",c);
    // getch();

    return 0;
}