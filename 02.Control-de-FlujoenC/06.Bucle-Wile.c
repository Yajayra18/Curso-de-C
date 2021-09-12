#include <stdio.h>
int n = 10; /*inicializa*/

int main()
{
    while (n > 10)/*condicion*/
    {
        printf("n es igual a %d\n", n);
        n = n - 1;/*cambio*/
    }
    printf("hemos salido del bucle por que n es igual o menor que 10");
    return 0;
}

/*el while siempre va a correr mientras la condición sea verdadera*/