#include <stdio.h>

float num1;
float num2;
float num3;
float num4;

int decision;
float sumatotal;

int main()
{
    printf("Ingresa un numero.. ");
    scanf("%f", &num1);

    printf("Ingresa otro numero.. ");
    scanf("%f", &num2);

    printf("Ingresa otro mas numero.. ");
    scanf("%f", &num3);

    printf("Ingresa un ultimo numero.. ");
    scanf("%f", &num4);
    
    printf("Deseas sumar todos los numeros, indique  NO:0/ SI: 1\n");
    scanf("%d", &decision);

    sumatotal = num1 + num2 + num3 + num4;

    if (decision == 0)
    {
        printf("has decisido no sumarlo");
    } else if (decision == 1)
    {
        printf("la suma de los numeros ingresados es %.0f", sumatotal);
    }
        
    return 0;
}
