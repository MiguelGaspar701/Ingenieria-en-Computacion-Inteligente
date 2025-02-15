#include <stdio.h>

    int n1 = 17;
    int n2 = 7;

    int suma();
    int resta();
    int multiplicacion();
    float division();

void main(){
    printf("%d + %d = %d\n", n1, n2, suma());
    printf("%d - %d = %d\n", n1, n2, resta());
    printf("%d * %d = %d\n", n1, n2, multiplicacion());
    printf("%d / %d = %f\n", n1, n2, division());
}

int suma(){
    return n1+n2;
}

int resta(){
    return n1-n2;
}

int multiplicacion(){
    return n1*n2;
}

float division(){
    return n1/(float)n2; //casting explicito
}