#include <stdio.h>
char curso [10];
int num;

int main()
{
    printf("Indique su curso Favorito\n");
    scanf("%s", &curso);
    printf("indique cuantas veces quiere mostrar el mensaje\n");
    scanf("%d", &num);

    if (num < 15)
    {
        for (int i = 0; i < num; i++)
        {
            printf("%s \n", curso);
        }
    } else if (num > 15)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%s \n", curso);
        }
        printf("%d es un numero muy grande", num);
    }
        
    return 0;
}
