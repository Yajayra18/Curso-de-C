#include <stdio.h>
char palabra [10];
char letra;

int main()
{
    printf("ingrese una palabra\n");
    gets(palabra);
    /*printf("%c", palabra[0]);
    printf(palabra[0] ==  'o' ? "si": "no");*/

    if (palabra[0] == 'a' || palabra[0] ==  'e' || palabra[0] ==  'i' || palabra[0] ==  'o' || palabra[0] ==  'u')
    {
        printf("%sway", palabra);
    } else {
        letra = palabra[0];
        for (int i = 1; i < strlen(palabra); i++)
        {
            palabra[i-1] = palabra[i];
        }
        palabra[strlen(palabra)-1] = letra;
        printf("%say", palabra);
        
    }
    
    
    return 0;
}
