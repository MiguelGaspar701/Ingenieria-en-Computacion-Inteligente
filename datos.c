#include <stdio.h>
//tipado(debe especificarse el tipo de datos siempre)
//Ambito o scope de variable/funciom
void main(){ 
    int numero_1;
    int numero_2 = 5;
    printf("%d", numero_1+numero_2); //interpoblacion de cadenas
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