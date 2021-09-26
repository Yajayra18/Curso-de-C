#include <stdio.h>

float num1;
float num2;
float multip;

int main()
{
    printf("Ingrese un numero decimal:\n");
    scanf("%f", &num1);
    printf("Ingrese otro numero decimal:\n");
    scanf("%f", &num2);

    multip = num1 * num2;
    printf("La multiplicacion de los numeros que ingreso es: \n %.2f", multip);
    

    return 0;
}
