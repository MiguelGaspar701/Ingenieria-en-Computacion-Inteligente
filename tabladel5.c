#include <stdio.h>
void tabladel5();
void main(){
    tabladel5();
}
void tabladel5(){
    int tabla = 5;
    int prod = 0;
    short int contador = 1;
    prod = tabla * contador;
    printf("%d * %d = %d\n", tabla, contador, prod);
    contador = contador +1;
    prod = tabla * contador;
    printf("%d * %d, = %d\n", tabla, contador, prod);
    contador ++;
}
