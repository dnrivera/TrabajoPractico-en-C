#include <stdio.h>
#include <stdlib.h>

/*
Calcular el promedio de 50 números introducidos por teclado e imprimirlos
por pantalla.
*/

int main()
{
    int i;
    int num;
    int acu = 0;
    float prom;

    for(i=0;i<50;i++)
    {
        printf("Inserte numero %d\n", i);
        scanf("%d", &num);

        acu = acu + num;
    }

    prom = (float) acu / 50;

    printf("El promedio es: %f", prom);
}
