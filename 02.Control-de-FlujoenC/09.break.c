#include <stdio.h>


int main()
{
    int n = 30;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("el valor actual de i es %d \n", i);
        if (i == 15)
        {
            printf("Hola todo se paraliza por mantenimiento de la michi");
            break;
        }
        
    }
    
    return 0;
}