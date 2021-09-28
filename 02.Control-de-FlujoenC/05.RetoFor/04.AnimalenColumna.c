#include <stdio.h>
char animal [10];
int longitud;
int cantidad;

int main()
{
    printf("Indique el nombre de su animal Favorito\n");
    gets(animal);
    longitud = strlen(animal);

    printf("Indique cuantas veces quiere que repita el nombre\n");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++)

    {
        for (int j = 0; j < longitud; j++)
        {
            printf("%c \n", animal[j]);
        }
    }
    
    return 0;
}
