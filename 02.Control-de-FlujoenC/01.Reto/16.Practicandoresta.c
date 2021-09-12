#include <stdio.h>
/*Reto #6 “Resta de pizzas”

    Instrucciones: llegaste a una fiesta con X cantidad de rebanadas de pizza (indicadas por el usuario), después de un rato se consumió Y cantidad de rebanadas y quedan Z. Fácil ¿cierto?
    El reto está en que expreses lo que sucede es una forma comprensible para cualquier persona, imprescindible pensar en tus usuarios 😉
*/
int rebanadas;
int consumieron = 5;
int quedan;

int main()
{
    rebanadas = 0;
    printf("cuantas rebanadas de pizza has traido \n");
    scanf("%d", &rebanadas);
    quedan = rebanadas - consumieron;
    if (quedan < 0)
        printf("Quedan 0 rebanadas de pizza");
    else 
        printf("Quedan %d rebanadas de pizza", quedan);
    return 0;
}
