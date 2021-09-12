#include <stdio.h>

int main()
{
    char nombre [20];
    char apellido [20];
    printf("escribe tu nombre\n");
    scanf("%s",nombre);/*es un input*/
    printf("ahora escribe tu apellido\n");
    scanf("%s",apellido);/*es un input*/
    printf("hola, %s %s", nombre, apellido);
    return 0;
}
