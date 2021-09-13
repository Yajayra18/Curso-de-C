#include <stdio.h>

int edad;

int main()
{
    printf("Escriba su edad\n");
    scanf("%d", &edad);

    if (edad >= 30){
        printf("Nunca es tarde para aprender, que curso tomaremos\n");
    } else if (edad >= 18 && edad <= 29){
        printf("Es un momento excelente para impulsar tu carrera\n");
    } else if (edad < 18 && edad >= 0){
        printf("Sabes hacia donde dirigir tu futuro, seguro puedo ayudarte\n");
    } else
        printf("Ingrese una edad positiva\n");
    return 0;
}
