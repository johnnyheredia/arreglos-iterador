#include <stdio.h>

int main(void) {

  int valor;
  int numero;
  int numeroMayor = 0;

  printf("Encontrar el numero mas grande de un arreglo\n");

  printf("Tamano del arreglo: ");
  scanf("%i", &valor);
  int arreglo[valor];

  //LLeno el arreglo
  printf("Ingresa los valores: \n");
  for(int n; n < valor; n++)
  {
    printf("Valor[%i]: ",n);
    scanf("%i", &numero);
    arreglo[n] = numero;
  }  

  //Busco en el arreglo el número mayor.
  for(int n; n < valor; n++)
  {
    if(arreglo[n] > numeroMayor)
    {
      numeroMayor = arreglo[n];
    }
  } 

   printf("\nEl numero mayor es: %i: ",numeroMayor);
  
  return 0;
}