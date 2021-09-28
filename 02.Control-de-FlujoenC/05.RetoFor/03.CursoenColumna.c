#include <stdio.h>
char curso [10];
int longitud;

int main()
{
    printf("Indique su curso Favorito\n");
    gets(curso);
    longitud = strlen(curso);

    for (int i = 0; i < longitud; i++)
    {
        printf("%c \n", curso[i]);
    }
    
    return 0;
}
