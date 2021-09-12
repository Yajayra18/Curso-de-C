#include <stdio.h>

char nombre [20];
int edad;
int edadAnoPasado;
int edadAnoFuturo;


int main()
{
    printf("Escriba su nombre \n");
    scanf("%s", &nombre);
    printf("Escriba su edad \n");
    scanf("%d", &edad);
    edadAnoPasado = edad - 1;
    edadAnoFuturo = edad + 1;
    if (edadAnoPasado < 0)
        printf("%s el ano pasado aun no nacias y el proximo ano cumpliras %d anos", nombre, edadAnoFuturo);
    else
        printf("%s el ano pasado tenias %d anos y el proximo ano cumpliras %d anos", nombre, edadAnoPasado, edadAnoFuturo);
    return 0;
}
