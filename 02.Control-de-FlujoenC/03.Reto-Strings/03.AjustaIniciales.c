#include <stdio.h>


char nombre [10];
char apellido [10];
char pais [15];

int main()
{
    printf("escribe tu nombre en minuscula\n");
    scanf("%s", &nombre);

    printf("escribe tu apellido en minuscula\n");
    scanf("%s", &apellido);
    
    printf("escribe tu pais de origen favorita en minuscula\n");
    scanf("%s", &pais);

    nombre[0] = toupper(nombre[0]);
    apellido[0] = toupper(apellido[0]);
    pais[0] = toupper(pais[0]);

    printf("Nombre:  %s\n", nombre);
    printf("Apellido:  %s\n", apellido);
    printf("Pais:  %s\n", pais);

    return 0;
}
