#include <stdio.h>

/*Reto #2 ‘Suma’ de strings

Crea un programa en el que le pidas en 3 variables distintas: 
nombre, apellido y comida favorita. Como salida mostrarás el mensaje Hola, mi nombres es {nombre} 
{apellido} y mi comida favorita es {comida} en un solo string.*/

char nombre [10];
char apellido [10];
char comida [15];

int main()
{
    printf("escribe tu nombre \n");
    scanf("%s", &nombre);

    printf("escribe tu apellido \n");
    scanf("%s", &apellido);
    
    printf("escribe tu comida favorita \n");
    scanf("%s", &comida);

    printf("Hola mi nombre es %s %s y mi comida favorita es %s", nombre, apellido, comida);
    
    return 0;
}
