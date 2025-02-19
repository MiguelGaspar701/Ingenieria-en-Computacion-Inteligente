//Escriba un orograma que pregunte al usuario el año de nacimiento y el año actual
//verificando que sean correctos dando un mensaje de error sino y si son correctos  
//imprima la edad del usuario, ademas que verifique si es mayor de edad
//Con codigo spaghetti
#include <stdio.h>
int main(){
    int año_nac, año_act, edad;
    
    printf("Ingrese el año de actual: ");
    scanf("%d", &año_act);
    if (año_act <0){
        printf("Error, el año debe ser mayor a 0");
        return 1;
    }else{
    printf("Ingrese el año de nacimiento: ");
    scanf("%d", &año_nac);
    if (año_nac <0 && año_nac > año_act ){
        printf("Error");
        return 0;
    }else{
            edad = año_act - año_nac;
            printf("La edad del usuario es: %d\n", edad);
            if (edad <=18){
            printf("El usuario es menor de edad");
         } else{
             printf("El usuario es mayor de edad");
         }
     }
     }
}   

