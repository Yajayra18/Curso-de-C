#include <stdio.h>
#include <math.h>

double PI = 3.14159265358979323846;
int radio;
int altura;
float volumen;

int main()
{   
    printf("ingresa el radio del cilindro: \n");  
    scanf("%d", &radio);  
    printf("ingresa la altura del cilindro: \n");
    scanf("%d", &altura);

    volumen = radio * radio * altura * PI;
    printf("El volumen del cilindro es: %0.1f \n", volumen); 
    return 0;
}
