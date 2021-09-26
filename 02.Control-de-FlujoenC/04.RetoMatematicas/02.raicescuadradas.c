#include <stdio.h>
#include <math.h>
/*
Pide a tu usuario que ingrese
 un número, cuyo valor debe ser mayor a 20, 
 luego calcula su raíz cuadrada y reduce a 2 o 3 
 decimales el resultado final.*/


float n1;
float raizc;

int main()
{
    printf("Ingresa un numero decimal mayor a 20 \n");
    scanf("%f", &n1);
    raizc = sqrt(n1);
    printf("la raiz cuadrada de dicho numero es: %0.2f \n", raizc);

    return 0;
}
