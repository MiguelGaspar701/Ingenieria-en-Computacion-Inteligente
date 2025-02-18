#include<stdio.h>
 int multiplicar(int a, int b); // prototipo de la funcion
 int tabla(int numero, int veces);
 int leer_numero(char * mensaje);
void main(){ // prototipo de la funcion
    int numero_1 = 0;

    printf("Introduce un numero entero: ");
    scanf("%d", &numero_1);
    printf("El valor de numero_1 es: %d\n", numero_1);
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d\n", numero_1, i, numero_1*i);
    }

}
//escriba una funcion que realice la multiplicación
//argumentos en funciones
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

