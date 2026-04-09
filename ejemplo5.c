#include <stdio.h>
#define MAX 5

void main ()
{
    int arreglo[MAX];
    
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese el valor %d del arreglo: ", i+1);
        scanf("%i", &arreglo[i]);
    }
    
    printf("El valor ingresado para cada elemento del arreglo es:\n[");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", arreglo[i]);
    }
    printf("]\n");
}





