#include <stdio.h>

float num;

int main()
{
    printf("Ingresa un numero\n");
    scanf("%f", &num);

    if (num > 0)
    {
        for (int i = 0; i = num; i++)
        {
            num = num - 1;
            printf("%.0f \n", num);
        }
        
    } else if (num < 0)
    {
        for (int i = 0; i = num; i++)
        {
            num = num + 1;
            printf("%.0f \n", num);
        }
    }
    
    return 0;
}
