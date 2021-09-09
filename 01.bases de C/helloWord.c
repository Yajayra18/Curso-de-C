#include <stdio.h>

int i, j, k;
unsigned int minimunMinutes = 30;

int main()
{
    /*Primer Hello World en el lenguaje C*/
    printf("Hello Platzi");
    return 0;
}

/*Tipo de Datos*/
/*Siempre tenemos que declarar que tipo de datos usaremos*/

Basic Types:
    (A) Aritmeticos enteros
                    char 1 Byte -128 a 127
                    unsigned char 1 Byte de 0 a 256
                    int 2 o 4 Bytes -32,768 a 32767 o -2,147,483,648 a 2,147,483,647
                    unsigned int 4 Bytes de 0 a 4,294,967,295ç
        /*short usa 2 Bytes y long usa 4 Bytes*/

    (B) De punto Flotante 
                    float 4 bytes 1.2E-38 a 3.4E+38 6 decimal places
        
    void : especifica que no hay valor disponible, se usa en 3 esenarios
        1.- Función retorn un tipo de datos void
            void funcion()
        2.- Función tienen argumentos de tipo void
            int rand(void)
        3.- Puntero o apuntador que va a la direccción en memoria de un objeto,
        
