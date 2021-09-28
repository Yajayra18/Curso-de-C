#include <stdio.h>

int num;
int multiplicacion;

int main()
{
    printf("Ingresa un numero \n");
    scanf("%d", &num);
    printf("Vamos a realizar la una multiplicacion con dicho numero\n");
    for (int i = 1; i < 11; i++) 
    {
        multiplicacion = num * i;
        printf("%d por %d es %d\n", num, i, multiplicacion);

        
    }
    
    return 0;
}
