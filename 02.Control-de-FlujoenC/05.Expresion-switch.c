#include <stdio.h>

int main()

{
    printf("menu");
    int opt1 = 1;
    int opt2 = 3;

    switch (opt1)
    {
    case 1:
        printf("elegiste el caso 1 \n");
        switch (opt2){
            case 1:
                printf("elegiste el caso 1 de la opcion 2");
                break;
            case 2:
                printf("elegiste el caso 2 de la opcion 2");
                break;
            case 3:
                printf("elegiste el caso 3 de la opcion 2");
                break;
            
            default:
                break;
        }
        break;  
    default:
        break;
    }
}