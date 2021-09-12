#include <stdio.h>

int main()
{
    float numero1;
    float numero2;
    float numero3;
    float resultado;
    printf("ingresa el primero numero \n");
    scanf("%f", &numero1);
    printf("ingresa el segundo numero \n");
    scanf("%f", &numero2);
    printf("ingresa el tercer numero \n");
    scanf("%f", &numero3);
    resultado = (numero1 + numero2) * numero3;
    printf("el resultado es: \n");
    printf("%.2f", resultado);
    return 0;
}
