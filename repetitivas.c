//estructuras repetitivas
//1. inicio
//2. condicion de termino, mecanismo de termino
//3. cuerpo del ciclo
//1 for
//2 while
//3 do while
#include <stdio.h>
void m1_for();
void m1_while();
void m1_do_while();

void main(){
    m1_for();
    m1_while();
    m1_do_while();
}
void m1_for(){
    printf("estructura repetitiva for\n");
    int i;
    for(i = 0; i < 10; i++){
        printf("i=%d\n", i);
    }
}
void m1_while(){
    printf("estreuctura repetitiva while\n");
    int i = 0;
    while (1 < 10){
        printf("i:%d\n", i);
        i++;
    }
}
void m1_do_while(){
    printf("estructura repetitiva do while\n");
    int i = 0;
    do{
        printf("i:%d\n", i);
        i++;
    }while(i < 10);
}