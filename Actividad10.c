#include <stdio.h>
#include <stdlib.h>

/*
El ministerio de Salud de la Nación tiene puntos de reparto de vacunas que
se pretende funcionen de la siguiente manera. Cada día, empezar con 1000
vacunas disponibles y a través de un programa que controla las entregas
avisar si el inventario baja de 200 unidades. Realizar el diagrama de flujo.
*/

int main()
{
    int unidades = 1000;
    int entregadas;
    int opc = 1;
    int num;

    while(opc != 0)
    {
        printf("Cuantas vacunas se han entregado hoy?\n");
        scanf("%d" , &entregadas);

        int unidades = unidades - entregadas;
        if(unidades < 200)
        {
            printf("El inventario bajo de 200 unidades!\n");
        }

        printf("Inserta un 0 para terminar el programa.\n");
        scanf("%d", &opc);

        unidades = 1000;
    }
}
