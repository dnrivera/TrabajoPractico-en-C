#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    float prom;

    printf("Escribir primer numero.\n");
    scanf("%d", &n1);
    printf("Escribir segundo numero.\n");
    scanf("%d", &n2);
    printf("Escribir tercer numero.\n");
    scanf("%d", &n3);

    prom = (float) (n1+n2+n3) / 3;

    if(prom > 10)
    {
        printf("El promedio es: %f\n" , prom);
    }
    int difn1n2 = n1 - n2;
    int difn1n3 = n1 - n3;
    int difn2n3 = n2 - n3;

    if(difn1n2 < 0)
    {
        difn1n2 = n2 - n1;
    }
    if(difn1n3 < 0)
    {
        difn1n3 = n3 - n1;
    }
    if(difn2n3 < 0)
    {
        difn2n3 = n3 - n2;
    }

    printf("La diferencia entre n1 y n2 es: %d\n" , difn1n2);
    printf("La diferencia entre n1 y n3 es: %d\n" , difn1n3);
    printf("La diferencia entre n2 y n3 es: %d\n" , difn2n3);



}
