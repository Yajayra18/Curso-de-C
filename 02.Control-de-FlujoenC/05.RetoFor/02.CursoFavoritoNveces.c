#include <stdio.h>
char curso [10];
int num;

int main()
{
    printf("Indique su curso Favorito\n");
    scanf("%s", &curso);
    printf("indique cuantas veces quiere mostrar el mensaje\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%s \n", curso);
    }
    
    return 0;
}
