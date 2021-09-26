#include <stdio.h>

char nombre [10];
char apellido [10];

int main()
{
    printf("Escribe tu nombre:  ");
    gets(nombre);
    nombre[0] = toupper(nombre[0]);        

    if (strlen(nombre) > 5)
    {
        printf("hola %s", nombre);

    } else if (strlen(nombre) < 5){
        printf("Escribe tu apellido:  ");
        gets(apellido);
        apellido[0] = toupper(apellido[0]);        
        printf("hola %s %s", nombre, apellido);
        
    } else {
        printf("siga las indicaciones, vuelva a intentarlo\n");
    }
    
    return 0;
}
