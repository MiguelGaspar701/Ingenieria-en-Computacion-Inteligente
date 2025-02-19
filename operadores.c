#include <stdio.h>
void main (){

    int a= 10;
    int b= 3;

    printf ("La suma de %d+%d es: %d\n", a, b, a + b);
    printf ("La resta de %d-%d es: %d\n", a, b, a - b);
    printf ("La multiplicacion de %d*%d es: %d\n", a, b, a * b);
    printf ("La division de %d/%d es: %f\n", a, b, a /(float) b);
    printf ("%d modulo %d es: %d\n", a, b, a % b);
    printf ("La division entera de %d/%d es: %d\n", a, b, a / b);

    float c= 10.5;
    int d= 3;
    printf ("La division de %f/%d es: %f\n", c, d, c / d); 

    float e= 3.5;
    printf ("La division de %f/%f es: %f\n", c, e, c / e);

    int contador = 0;
    contador ++; //esto es igual a contador = contador  mas 1
    printf ("El contador es: %d\n", contador);  
    contador +=5;//Esto es igual a contador = contador mas 5
    printf ("El contador es: %d\n", contador);
    contador -=2; //Esto es igual a contador = contador -2
    printf ("El contador es: %d\n", contador);
    
}