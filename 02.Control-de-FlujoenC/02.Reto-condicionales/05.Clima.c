#include <stdio.h>
#include <stdbool.h>

char lloviendo [2];
char viento [2];

bool siLloviendo = true;
bool siViento = true;

char si [2] = "si";

int main()
{
    printf("Esta lloviendo si/no \n");
    scanf("%s", lloviendo);

    int i;
    for (i = 0; i < 2; i++)
    {
        lloviendo[i] = tolower(lloviendo[i]);
        if (!(lloviendo[i] == si[i]))
        {
            siLloviendo = false;
        }
    }
    

    if (siLloviendo)
    {
        printf("Esta haciendo mucho viento si/no\n");
        scanf("%s", viento);

        int j;
        for (j = 0; j < 2; j++)
        {
            viento[j] = tolower(viento[j]);
            if (!(viento[j] == si[j]))
            {
                siViento = false;
            }
        }   

        if (siViento)
            printf("hace mucho viento para salir con una sombrilla");
        else
            printf("lleve una sombrilla");
    } else 
        printf ("Que tengas un bonito dia");
    
    return 0;
}
