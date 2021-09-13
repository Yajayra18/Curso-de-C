#include <stdio.h>

float numSup;
float numInf;
float numComp;

int main()
{
    printf("Escribe un numero de limite superior\n");
    scanf("%f", &numSup);

    printf("Escribe otro numero de limite inferior\n");
    scanf("%f", &numInf);

    printf("Escribe otro numero de comparacion\n");
    scanf("%f", &numComp);

    if (numComp > numInf && numComp < numSup)
        printf("El numero %.0f se encuentra entre los dos primeros numeros", numComp);
    else 
        printf("El numero %.0f excede el limite permitido", numComp);
    return 0;
}
