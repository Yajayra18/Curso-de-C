#include <stdio.h>

float num1;
float num2;
int cabe;

int main()
{
    printf("ingresa un numero mayor a 1000\n");
    scanf("%f", &num1);

    printf("ingresa un numero menor a 100\n");
    scanf("%f", &num2);
    
    cabe = num1/num2;
    printf("el numero 2 cabe %d veces en el numero 1", cabe);
    return 0;
}
