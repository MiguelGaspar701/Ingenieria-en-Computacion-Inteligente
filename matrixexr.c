//asignar a una matriz los valores de 
//1,2,3,4,5 de manera automatica 5x5
#include<stdio.h> //Rutas relativas

#define MAX 5
#define MIN1

int m[MAX][MAX];
void llenarmatriz();
void mostrarmatriz();
void escalarmatriz(int k);

void main(){
    llenarmatriz();
    mostrarmatriz();
    escalarmatriz(5);
    mostrarmatriz();

}
void llenarmatriz(){
    for(int i=0; i<MAX; i++ ){
        for(int j=0; j<MAX; j++){
            m[i][j] = j+1;
        }
    }
}

void mostrarmatriz(){
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            printf("%d ", m[i][j]);

        }
    }
    printf("\n");
}
void escalarmatriz(int k){
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            m[i][j] = m[i][j] * k;
        }
    }
    printf("\n");
}