//Programma che calcola area e perimetro del cerchio 

#include <stdio.h>

int main()
{
  //costante del pi greco
  double pi = 3.14159;
  int raggio;

  printf("-------------Attenzione-------------\n");
  printf("Inserisci il raggio del cerchio = ");
  scanf("%d", &raggio);
  printf("\n------------------------------------\n");

  printf("\n----------Operazioni---------\n");
  printf("Diametro = %f\n", raggio*2.0);
  printf("Circonferenza = %f\n", 2.0*pi*raggio);
  printf("Superficie = %f\n", pi*raggio*raggio);
  printf("\n-----------------------------\n");


  return 0;
}
