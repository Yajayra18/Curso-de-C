#include <stdio.h>
#include <math.h>


int radio;
float areaC;
double PI = 3.14159265358979323846;

int main()
{
    printf("Ingresa un numero: \n");
    scanf("%d", &radio);
    areaC = (PI * pow(radio, 2));
    printf("%.0f",areaC);

   /* printf("El area de un circulo que tiene el radio el numero que ingreso es: %d \n", areaC);

    */
    return 0;
}
