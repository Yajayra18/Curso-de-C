#include <stdio.h>
#include <math.h>

/*Pide al usuario que ingrese 2 números, divídelos, muestra 
un resultado como enteros y además el residuo por separado de una 
forma que seal fácil de entender al usuario.
Por ejemplo: “9 dividido entre 2 es 4 y sobra 1”.*/

float num1;
float num2;
int div;
float residuo;


int main()
{
    printf("ingresa un numero:  ");
    scanf("%f", &num1);

    printf("ingresa otro numero:  ");
    scanf("%f", &num2);


    if (num1 > num2 && num2 > 0)
    {
        div = (int)num1 / num2;
        residuo =  num1 - num2 * div; 
        printf("%.1f divido entre  %.1f es %d y el residuo es %.1f",num1, num2, div, residuo);
    
    } else if (num2 > num1 && num1 > 0){
        div = (int)num2 / num1;
        residuo =  num2 - num1 * div; 
        printf("%.1f divido entre  %.1f es %d y el residuo es %.1f",num2, num1, div, residuo);
        
    } else{
        printf("ingrese numeros enteros mayores a 0");
    }
        
    return 0;
}
