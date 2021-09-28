#include <stdio.h>

int recta;
int nump;
int numn;

int main()
{
    printf("desea una recta numerica positiva 1  o negativa 2\n");
    scanf("%d", &recta);
    if (recta == 1)
    {
        printf("ingresa un numero positivo\n");
        scanf("%d", &nump);

        printf("la recta numerica seria \n ");
        for (int i = 0; i < nump; i++)
        {
            printf("%d\n",i);
        }

    } else if (recta == 2){
        printf("ingresa un numero negativo\n");
        scanf("%d", &numn);

        printf("la recta numerica seria \n ");
        for (int i = 0; i > numn; i--)
        {
            printf("%d\n",i);
        }

    }
    
    return 0;
}
