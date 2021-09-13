#include <stdio.h>

float n1;
float n2;

int main()
{
    printf("Escribe un numero limite\n");
    scanf("%f", &n1);

    printf("Escribe otro numero\n");
    scanf("%f", &n2);

    if (n1 > n2)
        printf("El numero %.0f se encuentra en el rango, gracias", n2);
    else 
        printf("El numero %.0f excede el limite permitido", n1);
 
    
    return 0;
}
