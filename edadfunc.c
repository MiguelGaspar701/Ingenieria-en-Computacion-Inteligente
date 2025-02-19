//Escriba un orograma que pregunte al usuario el año de nacimiento y el año actual
//verificando que sean correctos dando un mensaje de error sino y si son correctos  
//imprima la edad del usuario, ademas que verifique si es mayor de edad
//Con funciones
#include <stdio.h>
int leer_aa(char *msg);
int validar_aa(int anac, int aact);
int calcular_edad(int anac, int aact);

void main(){
    int anac, aact, edad;
    anac = leer_aa("Año de nacimiento: ");
    aact = leer_aa("año actual: ");
    if (validar_aa(anac, aact)){
        edad = calcular_edad(anac, aact);
        printf("La edad es: %d\n", edad);
    }if (edad >=18){
            printf("Es mayor de edad\n");
        }else{  
            printf("Es menor de edad\n");
        }
}

int validar_aa(int anac, int aact){
    if (anac > aact){
        printf("Error en los años\n");
        return 0; //false
    }else{
        return 1; //true
    }
}
int leer_aa(char *msg){
    int aa;
    printf("%s", msg);
    scanf("%d", &aa);
    return aa; 
}
int calcular_edad(int anac, int aact){
    return aact - anac;
}