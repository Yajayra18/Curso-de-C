#include <stdio.h>

int main()
{
    int n = 30;
    int i;
    for (i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        printf("el valor actual de i es %d \n", i);
        
    }
    
    return 0;
}


/*continue es lo opuesto a break quiere decir que salta a la iteración, solo funciona en -> for, while, do while*/
/*continue fuerza sacarnos del bucle y pasar a la siguiente interacion*/