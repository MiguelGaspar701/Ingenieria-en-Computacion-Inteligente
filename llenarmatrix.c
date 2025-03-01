#include<stdio.h> //Reutas relativas
//#include"./hola.h"//rutas asbolutas

#define MAX 3
#define MIN 1

void main(){
    int matrix[MAX][MAX] = {{1,2,3},{1,2,3},{1,2,3}};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
 //   hola();
}

