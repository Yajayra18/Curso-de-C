#include <stdio.h>
int n = -1;

int main()
{
    if (n > 10 && n <20)
        printf("el numero es mayor que diez");
    else if (n == 10)
        printf("el numero es diez");
    else if (n > 20)
        printf("el numero mayor a veinte");
    else if (n < 10 && n >= 0)
        printf("el numero esta en el rango de 0 a 9");
    else if (n < 0)
        printf("el numero es negatio")
    else 
        printf("error no hay numero");
    return 0;
}