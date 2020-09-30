#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  int num;
  int acu = 0;

  for(i=0;i<10;i++)
  {
    printf("Introducir numero %d\n", i);
    scanf("%d", &num);
    acu = acu + num;
  }

  printf("La suma de los numeros es: %d", acu);
}
