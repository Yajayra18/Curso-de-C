#include <stdio.h>
#include <string.h>

char curso [15];

int main()
{
    printf("Escribe el nombre de tu curso favorito \n");
    scanf("%s", curso);
    printf (" la longitud de ese string  es %d", strlen(curso));
    
    return 0;
}
