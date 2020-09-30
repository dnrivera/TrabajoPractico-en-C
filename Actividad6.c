#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int opc = 0;

    printf("Inserte el primer numero\n");
    scanf("%d", &n1);

    printf("Inserte el segundo numero\n");
    scanf("%d", &n2);
    do
    {
        printf("Quiere sumar o restar?\n");
        printf("1- Sumar\n");
        printf("2- Restar\n");
        scanf("%d" , &opc);

    }while(opc != 1 && opc != 2)

    ;if(opc == 1)
    {
        printf("El resultado es %d", n1+n2);
    }
    if(opc == 2)
    {
        printf("El resultado es %d", n1-n2);
    }
    return 0;
}
