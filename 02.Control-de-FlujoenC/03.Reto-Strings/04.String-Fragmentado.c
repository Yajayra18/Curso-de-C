#include <stdio.h>

char texto [20];
int longitud;
int rIni;
int rFin;


int main()
{
    printf("Indique una oracion de 10 o mas caracteres sea poema o cancion\n");
    gets(texto);

    longitud = strlen(texto);
    printf("la longitud del texto es %d \n", longitud);

    printf("Ingrese un numero para rango inicial\n");
    scanf("%d", &rIni);

    printf("Ingrese un numero para rango final\n");
    scanf("%d", &rFin);
    
    for (int i = rIni; i <= rFin; i++)
    {
        printf("%c", texto[i]);
    }
    
    return 0;
}
