#include <stdio.h>
void main(){
    int a, b;
    a= 10;
    b = 3;
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    if (a < b){
        printf("%d es mayor que %d\n", a, b);
    }else{
        printf("%d es mayor que %d\n", b, a);
    }     
    //Calificacion entre cero y diez 
    //operadores lógicos
    // && and || or ! not
    int calificacion;
    calificacion  = 11;
    if (calificacion >=0 && calificacion <= 10){
        printf("Calificacion correcta\n");
    }else{      
        printf("Calificacion incorrecta\n");
    }
}