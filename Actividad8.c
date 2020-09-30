#include <stdio.h>
#include <stdlib.h>

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
