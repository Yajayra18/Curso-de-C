#include <stdio.h>
#include <ctype.h>

char animal [10];
char tortuga [10] = "tortuga";
char tortugas [10] = "tortugas";

int main()
{
    printf("Escribe tu animal favorito\n");
    scanf("%s", &animal);

    int i;
    for (i = 0; i < 10; i++)
    {
        animal[i] = tolower(animal[i]);
    }

    int j;
    for (j = 0; j < 10; j++)
    {
        if (!(animal[j] == tortuga[j] || animal[j] == tortugas[j]))
        {
            printf("Ese animal es genial pero prefiero las tortugas\n");
            return 0;
        }
    }
    printf("Tambien me gustan las tortugas\n");

    return 0;
}
