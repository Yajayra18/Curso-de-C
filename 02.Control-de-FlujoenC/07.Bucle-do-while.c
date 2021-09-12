#include <stdio.h>

/*ejecutamos en código al menos una vez y luego el while ejecuta mientras cumpla la condición*/
int n = 10;
int main()
{
    do
    {
        printf("n es igual a %d\n", n);
        n = n - 1;
    } while (n > 10);
    printf("hemos salido del bucle por que n es igual o menor que 10");
   
    return 0;
}
