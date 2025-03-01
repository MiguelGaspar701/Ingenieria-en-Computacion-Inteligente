#include <stdio.h>

void main(){
    //char *mensaje1[] = "Hola";

    char *mensaje2[] = {"Hola","Mundo"};
    for(int i = 0; i < 2; i++){ //Recorre los renglones
        for(int j = 0; j < 5; j++){ //REccorre las columnas
            printf("%c", mensaje2[i][j]);
        }
        printf("\n");
    }
printf("\n");
}