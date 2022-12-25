#include <stdio.h>
#include <stdlib.h>
// #include <process.h>
// #include <conio.h>

float f(float x){
    return (x*x*x-6*x+4);
}

float f1(float x){
    return (3*x*x-6);
}

int main(){
    int i,n;
    float x0,x1;

    // clrscr();

    printf("Enter the number of iteration:\n");
    scanf("%d",&n);

    printf("Enter initial value:\n");
    scanf("%f",&x0);

    for(i=0;i<n;i++){
        x1 = x0- (f(x0)/f1(x0));

        if(f(x1) ==0){
            break;
        }else{
            x0 = x1;
        }
    }

    printf("The required root is: %f",x1);

    // getch();

    return 0;
}