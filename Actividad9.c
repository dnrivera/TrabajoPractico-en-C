#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;

    while(num != 0)
    {
        printf("Escribe un numero entre 0 y 999. Insertar 0 para terminar el programa.\n");
        scanf("%d", &num);

        if(num > 0 && num <= 999)
        {
            if(num >= 100)
                printf("El numero es de tres digitos.\n");
            if(num >= 10 && num < 100)
                printf("El numero es de dos digitos.\n");
            if(num > 0 && num < 10)
                printf("El numero es de un digito.\n");
        }
    }
}
