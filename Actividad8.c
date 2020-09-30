#include <stdio.h>
#include <stdlib.h>

/*
Realizar un programa que me permita ingresar números por teclado y
calcular su promedio una vez que se ingrese un cero
*/

int main()
{
    int contador = 0;
    int num;
    int acu = 0;
    float prom = 0;

    while(num != 0)
    {
        printf("Ingresa numeros. Para calcular el promedio ingresa un 0.\n");
        scanf("%d", &num);
        if(num != 0)
        {
        acu = acu + num;
        contador = contador + 1;
        }
    }

    prom = (float) acu / contador;

    printf("El promedio es: %f", prom);


}
