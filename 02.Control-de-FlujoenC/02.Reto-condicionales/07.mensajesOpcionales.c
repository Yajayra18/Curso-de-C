#include <stdio.h>

int numero;

int main()
{
    printf("escribe un numero entre el 1 al 6\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Hoy aprenderemos sobre programacion");
        break;

    case 2:
        printf("Que tal tomar un curso de marketing digital");
        break;

    case 3:
        printf("Hoy es un gran dia para comenzar a aprender de diseno");
        break;
    
    case 4:
        printf("Y si aprendemos algo de negocios online");
        break;
    
    case 5:
        printf("Veamos un par de clases sobre produccion audiovisual");
        break;
    
    case 6:
        printf("Tal vez sea bueno desarrollar una habilidad blanda en Platzi");
        break;
    
    default:
        printf("ingrese un numero en el rango valido, es decir del 1 al 6");
        break;
    }

    return 0;
}
