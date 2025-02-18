#include<stdio.h>
 int multiplicar(int a, int b); // prototipo de la funcion
 int tabla(int numero, int veces);
 int leer_numero(char * mensaje);
void main(){ // prototipo de la funcion
    int numero = leer_numero("Ingrese un numero: ");
    int veces = leer_numero("Ingrese cuantas veces: ");
    tabla(numero, veces);
    printf("ICI soluciones inteligentes de software agradece su preferencia\n");
}

int leer_numero(char * mensaje){
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}
int tabla(int numero, int veces){
    for (int i=1; i<=veces; i++){
    printf("%d * %d = %d\n", numero, i, numero*i);
    }
}
    
int multiplicacion(int a, int b){ //C solo maneja funciones conargumentos posicionales
    return a*b;
}

