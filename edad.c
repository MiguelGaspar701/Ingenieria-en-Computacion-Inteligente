//Escribir un programa que dado el año de nacimiento y el año actual
//calcule la edad de una persona
//escriba una funcion que imprima la edad
//escruba una funcion que la retorne
//use ambas en el programa principal
#include <stdio.h>

void imprimiredad1();
int imprimiredad2();

void main(){
    imprimiredad1();
    int edad = imprimiredad2();
        printf("Tienes %d años de edad\n", edad);
}
void imprimiredad1(){ //tipo de procedimientos/procedures
    int a_nac = 2006;
    int a_act = 2025;
    int edad = 0;
    edad = a_act - a_nac;
     printf("Tienes %d años de edad\n ", edad);
}

int imprimiredad2(){
    int a_nac = 1976;
    int a_act = 2025;
    int edad = 0;
    edad = a_act - a_nac;
    return edad;
}
