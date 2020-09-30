#include <stdio.h>
#include <stdlib.h>

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
