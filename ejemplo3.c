#include <stdio.h>
int main () 
{
  char op = 'n';
  double sum = 0, calif = 0; 
  int veces = 0;
 
  do
  {
    printf("\tSuma de calificaciones\n"); 
    printf("Ingrese la calificación: "); 
    scanf("%lf", &calif);
    veces++;
    sum = sum + calif;
    printf("¿Desea sumar otra? S/N\n");
    setbuf(stdin, NULL); // limpia el buffer del teclado 
    scanf("%c",&op);
    getchar();
    //printf("el char es %c \n", op);
  }
  while (op == 'S' || op == 's');
  
  printf("El promedio de las calificaciones ingresadas es: %lf\n", sum/veces);
  return 0; 
}
