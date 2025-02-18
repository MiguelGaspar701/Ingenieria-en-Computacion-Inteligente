
// tipos de adtos literales (primitivos): int, flaot, couble, char, void
//modificadores de tipo de datos: signed, unsigned, short, long
//palabras reservadas:
//constantes: const
//Constantes simbpolicas: #define

#include <stdio.h>

#define PI 3.14159267 //En tiempo de procesamiento se define una constante simbolica
void main(){
    const double Pi = 3.14159267;
    int numero_1 = 10;
    printf("El valor de numero_1 es: %d\n", numero_1); // %d es para imprimir un entero
    numero_1 = 3.14159267;
    printf("El valor de numero_1 es: %f\n", (float)numero_1);
    const int numero_2 = 20; //en tiempo de compilacion se asigna el valor


    numero_1 = 30; // operaciones destructivas
    printf("El valor de numero_1 es: %d\n", numero_1);
    printf("El valor de PI es: %2.5f\n", Pi); // %f es para imprimir un flotante
    printf("El valor de PI es: %2.5f\n", PI);

    //byte = 8 bits 
    //1 bit = una unidad minima de información


}