#include <stdio.h>
#include <stdlib.h>

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
