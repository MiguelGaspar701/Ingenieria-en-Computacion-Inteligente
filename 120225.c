//escriba un programa que imprima los dias de la semana 
// en dos funciones, en una los dias habiles y en otro los dias de fin de semana
#include <stdio.h>
void dhbailes();
void dfinde();

void main(){
    dhbailes();
    dfinde();
}
void dhbailes(){
    printf("Lunes\nMartes\nMiercoles\nJueves\nViernes\n");
}
void dfinde(){
    printf("Sabado\n");
    printf("Domingo\n");
}