#include <stdio.h>
char p1 [10];
char p2 [10];

int main()
{
    printf("escriba una palabra\n");
    gets(p1);

    printf("escriba otra palabra\n");
    gets(p2);

    printf("te monstrare tus palabras en en mayuscula y minuscula :)\n");

    for (int i = 0; i < 10; i++)
    {
        p1[i] = toupper(p1[i]);
    }
    printf("%s\n", p1);
    

    for (int i = 0; i < 10; i++)
    {
        p2[i] = tolower(p2[i]);
    }
    printf("%s\n", p2);
    

    return 0;
}
