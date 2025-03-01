//1. Suma de los cuadrados de los primeros n números: Escribe un programa
// que calcule la suma de los cuadrados de los primeros n números naturales.
// Usa una función para obtener la suma.

//2. Producto de los elementos de un arreglo por un escalar, usa una función para obtener el producto.

// 3.Suma de los dígitos de un número: Escribe un programa que calcule la suma de los dígitos de un número entero. 
//Usa una función para obtener la suma.

// 4.Promedio de los elementos de un arreglo: Escribe un programa que calcule 
//el promedio de los elementos de un arreglo de enteros. Usa una función para obtener el promedio.

//PROGRAMA CREADO POR MIGUEL ALEJANDRO GASPAR VIZCAÍNO 2°B
#include <stdio.h>

int sumacuadrado(int n); //prototipo de la función
void multesc(int arr[], int escalar, int m);
int sumadigit(int x);
float promedio(int t, int arr2[]);

int main(){
    int n= 3;//cantidad de numeros naturales
    int escalar = 2; //Escalar
    int m = 3;//tamaño del arrglo
    int arr[] = {2,4,6};//arreglo
    int n1 = 22;// numeros de los cuales se extraeran sus digitos para la suma
    int x= 0; //numero del cual se extraeran lso digitos
    int t= 3; //tamaño del arreglo2
    int arr2[] = {1,3,6};//numeros del arreglo2
    int suma=0;//variable donde se guardará la suma

    printf("la suma de los cuadrados de los primeros %d numeros naturales es: %d\n", n, sumacuadrado(n));
    printf("el producto de los elementos del array por %d es: ", escalar);
    multesc(arr, escalar, m);
    printf("la suma de los digitos de %d es = %d\n", n1, sumadigit(n1));
    printf("el promedio de los numeros en el array es: %.2f\n", promedio(t, arr2));
    return 0;
}

int sumacuadrado(int n){
    int suma = 0;

    for(int i=1; i<=n; i++){
        suma += i*i;
    }  
    return suma;
}

void multesc(int arr[], int escalar, int m){
 
    for(int i=0; i<m; i++){
        arr[i]*=escalar;
    }
    for(int i=0; i<m; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int sumadigit(int x){
    int suma = 0;
    while (x > 0) {
        suma += x % 10; // agarra el último dígito y lo suma
        x /= 10; // quita al último dígito
    }
    return suma;
}
float promedio(int t, int arr2[]){
    int suma=0;
    for(int i=0; i<t; i++){
        suma += arr2[i];
    }
    return(float) suma/t;
}