#include <stdio.h>
void swap_double( double *x, double *y);

int main(){
    double n1=6,n2=13;
    printf("%f %f\n",n1,n2);
    swap_double(&n1,&n2);
    printf("%f %f\n",n1,n2);
}

void swap_double( double *x, double *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}