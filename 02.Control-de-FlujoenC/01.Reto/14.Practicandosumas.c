#include <stdio.h>

int main()
{
    float numero1;
    float numero2;
    float suma;
    printf("ingresa el primero numero \n");
    scanf("%f", &numero1);
    printf("ingresa el segundo numero \n");
    scanf("%f", &numero2);
    suma = numero1 + numero2;
    printf("la suma es: \n");
    printf("%.2f", suma);
    return 0;
}
