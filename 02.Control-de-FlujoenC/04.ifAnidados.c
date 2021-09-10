#include <stdio.h>
int opt1 = 1;
int opt2 = 2;

int main (){
    //este programa genera menus segun lo que el usuario elija
    if (opt1 == 0){   
        printf("usted eligio la opcion 0 \n");

        if (opt2 == 0)
            printf("usted eligio a");
        else if (opt2 == 1)
            printf("usted eligio b");
        else if (opt2 == 2)
            printf("usted eligio c");
        else
            printf("opcion no valida");
    }

    else if (opt1 == 1){   
        printf("usted eligio la opcion 1 \n");

        if (opt2 == 0)
            printf("usted eligio a2");
        else if (opt2 == 1)
            printf("usted eligio b3");
        else if (opt2 == 2)
            printf("usted eligio c4");
        else
            printf("opcion no valida");
    }
    return 0;
}