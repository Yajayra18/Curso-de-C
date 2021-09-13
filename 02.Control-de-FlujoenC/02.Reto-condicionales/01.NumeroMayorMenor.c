#include <stdio.h>

float n1;
float n2;
float diferencia;

int main()
{
    printf("Escribe un numero\n");
    scanf("%f", &n1);

    printf("Escribe otro numero\n");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("%.0f es el numero mayor\n", n1);
        diferencia = n1 - n2;
        printf("%.0f es la diferencia entre ambos numeros", diferencia);

    } else if (n1 < n2){
        printf("%.0f es el numero mayor\n", n2);
        diferencia = n2 - n1;
        printf("%.0f es la diferencia entre ambos numeros", diferencia);

    } else if (n1 == n2){
        printf("Ambos numeros son iguales\n");
    } else {
        printf("vuelve a intentarlo\n");
    }
    
    return 0;
}
