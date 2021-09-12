#include <stdio.h>

float milla2km = 1.609344;
int milla;
float kilometros;


int main()
{
    printf("Indique una cantidad de millas \n");
    scanf("%d", &milla);
    kilometros = milla * milla2km;
    printf("Las millas que ingreso equivalen a %.0f kilometros", kilometros);
    return 0;
}
