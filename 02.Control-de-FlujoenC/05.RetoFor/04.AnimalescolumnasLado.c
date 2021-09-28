#include <stdio.h>
char animal [10];
int longitud;
int cantidad;

int main()
{
    printf("Indique el nombre de su animal Favorito\n");
    gets(animal);
    longitud = strlen(animal);

    printf("Indique cuantas columnas habra\n");
    scanf("%d", &cantidad);

    for (int i = 0; i < longitud; i++)     
    {
        for (int j = 0; j < cantidad; j++)
        {
            printf("%c ", animal[i]);
        }
        printf("\n");
    }
    return 0;
}