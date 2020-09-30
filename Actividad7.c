#include <stdio.h>
#include <stdlib.h>

/*
Diseñar un algoritmo, que me permita calcular el cuadrado de un número
ingresado por teclado y el ciclo termina cuando se ingresa un 0.(Usar un ciclo
repetitivo While).
*/

int main()
{
    int num = 1;

    while(num != 0)
    {
        printf("Inserte un numero para elevarlo al cuadrado.\n");
        scanf("%d" , &num);
        if(num != 0)
        {
            num = num * num;
            printf("El cuadrado del numero es: %d\n" , num);
        }
    }
}
