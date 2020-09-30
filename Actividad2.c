#include <stdio.h>
#include <stdlib.h>

/*
Calcular y visualizar la suma y el producto de los números pares
comprendidos entre 20 y 400. Ambos inclusive.
*/

int main()
{
    int num = 20;
    int suma = 0;
    int producto = 20;

    for(num=20;num<=400;num=num+2)
    {
    printf("%d\n", num);
    suma = suma + num;
    producto = producto * num;
    }

    printf("La suma es: %d\n" , suma);
    printf("El producto es: %d\n" , producto);
}
