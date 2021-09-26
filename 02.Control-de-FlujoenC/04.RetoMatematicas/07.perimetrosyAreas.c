#include <stdio.h>
#include <math.h>

/*Muestra un menú con distintas figuras geométricas, por lo menos 3 diferentes 
(triángulo, cuadrado, pentágono, etc.)
Tu usuario debe poder elegir alguna de estas figuras, indicar la
 distancia de sus lados y mostrar como resultado tanto el perímetro como el área 
 de dicha figura.*/

int opcion;
float lado;
float perimetro;
float area;


int main()
{
    printf("Menu\n");
    printf("Vamos a calcular los perimetros y areas de una figura geometrica, las opciones son \n");
    printf("Opcion 1:  triangulo\n");
    printf("Opcion 2:  cuadrado\n");
    printf("Opcion 3:  pentagono\n");

    printf("indica la distancia del lado de la figura geometrica.. \n");
    scanf("%f", &lado);

    printf("elige la figura geometrica a calcular, es la Opcion elegida es:  ... ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("**** Elegiste el triangulo **** \n");
        
        perimetro = lado * 3;
        area = (sqrt(3) * lado * lado) /4;

        printf("el perimetro de triangulo es %.1f \n", perimetro);
        printf("el area del triangulo es %.1f \n", area);
        
        break;

    case 2:
        printf("**** Elegiste el cuadrado **** \n");
        
        perimetro = lado * 4;
        area = lado * lado;

        printf("el perimetro de cuadrado es %.1f \n", perimetro);
        printf("el area del cuadrado es %.1f \n", area);
        
        break;

    case 3:
        printf("**** Elegiste el pentagono **** \n");
        
        perimetro = lado * 5;
        area = (15. / 16.) * lado * lado;

        printf("el perimetro de pentagono es %.1f \n", perimetro);
        printf("el area del pentagono es %.1f \n", area);
        
        break;
    
    default:
        break;
    }
    return 0;
}
