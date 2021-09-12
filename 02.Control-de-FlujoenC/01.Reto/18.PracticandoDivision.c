#include <stdio.h>
/*Reto #8 “Divide la cuenta”
    Instrucciones: vas con tus amigos a tu restaurante favorito y acuerdan dividir la cuenta. 
    Para facilitar las cosa pedirás al usuario que indique el total a pagar, entre cuantas personas 
    se dvidirá la cuenta, porcentaje de propina a incluir, un porcentaje de impuestos, total a pagar 
    incluyendo propina más impuestos y el total a pagar por cada persona.
*/
int personas;
float totalConsumido;
float totalPagar;
float personaPagar;
float propina;
float impuestos = 0.18;

int main()
{
    printf("Bienvenido al Restaurant de la Michi, cual es el total cosumido?\n");
    scanf("%f", &totalConsumido);
    printf("Cuantos pagaran la cuenta?\n");
    scanf("%d", &personas);
    printf("Por ser un gran cliente cual sera el porcentaje de propina\n");
    scanf("%f", &propina);
    printf("Los impuestos en Peru son el 18%% \n");
    totalPagar = (propina/100 + impuestos + 1)* totalConsumido;
    personaPagar = totalPagar/personas;
    
    printf("el total a pagar es %.2f \n", totalPagar);
    printf("A cada persona le corresponde pagar %.2f vuelva pronto\n", personaPagar);

    return 0;
}
