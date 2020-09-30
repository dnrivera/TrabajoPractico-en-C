#include <stdio.h>
#include <stdlib.h>

/*
Dados 10 números enteros que introducimos por teclado, mostrar la suma de
los números pares de la lista, cuántos números pares existen y cual es el
promedio de los números impares.
*/

int main()
{
    int i;
    int num;
    int pares = 0;
    int impares = 0;
    int acupar = 0;
    int acuimpar = 0;
    float promimpar;

    for(i=0;i<10;i++)
    {
        printf("Inserte el numero %d\n", i);
        scanf("%d" , &num);

        if((num % 2) == 0)
        {
            pares = pares + 1;
            acupar = acupar + num;
        }
        else
        {
            impares = impares + 1;
            acuimpar = acuimpar + num;
        }
    }

    promimpar = (float) acuimpar / 10;

    printf("Hay %d numeros pares en total.\n" , pares);
    printf("Hay %d numeros impares en total.\n", impares);
    printf("La suma de los numeros pares es: %d\n", acupar);
    printf("El promedio de los numeros impares es: %f\n" , promimpar);
}
