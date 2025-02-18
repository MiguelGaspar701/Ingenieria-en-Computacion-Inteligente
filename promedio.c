//escriba un programa que calcule el promedio de n numeros leidos desde el teclado
#include<stdio.h>

float promedio(int n, int suma);
int leer_numero(char * mensaje, short int num, int opcion);
int sumadenumeros(int n);

void main(){
    int n = leer_numeros("Introduce la cantidad de numeros a promediar: ", 1, 1);
    int suma = sumadenumeros(n);
 
    printf("El promedio de los %d numeros es: %.2f\n", n, promedio(n, suma));
    printf("ICI soluciones inteligentes de software agradece su preferencia\n");

}

int leer_numeros(char * mensaje, short int num, int opcion){
    int numero;
    if (opcion == 1){
        printf("%s", mensaje);
        scanf("%d", &numero);
    }else{
        printf("%s", mensaje, num);
        scanf("%d", &numero);
    }
    printf("%s[%d]", mensaje);
    scanf("%d", &numero);
    return numero;
}

int sumadenumeros(int n){
    int suma = 0;
    for (int i=1; i<=n; i++){
    suma += leer_numero("Introduce un numero: ", i , 0);
    }
    return suma;
}   
float promedio(int n, int suma){
    return suma/n;
}   