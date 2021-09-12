#include <stdio.h>

int cantidadDias;
int horas;
int minutos;
int segundos;

int main()
{
    printf("indica una cantidad de dias\n");
    scanf("%d", &cantidadDias);
    horas = cantidadDias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("los dias que indicaste tiene %d horas \n", horas);
    printf("los dias que indicaste tiene %d minutos\n", minutos);
    printf("los dias que indicaste tiene %d segundos\n", segundos);

    return 0;
}
