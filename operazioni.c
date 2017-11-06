
//Programma che esegue le cinque operazioni base su due interi inseriti dall'utente

#include <stdio.h>

int main()
{
  int num1, num2, som, diff, prod, quoz, resto;
  printf("--Inserisci i valori su cui operare--\n");
  printf("     Inserisci un intero= ");
  scanf("%d", &num1);
  printf("     Inserisci un altro intero= ");
  scanf("%d", &num2);
  printf("-------------------------------------");
  
  som = num1+num2;
  diff = num1-num2;
  prod = num1*num2;
  quoz = num1/num2;
  resto = num1%num2;

  printf("\n--Risultati--\n");
  printf("Somma  = %d\n", som);
  printf("Differenza = %d\n", diff);
  printf("Prodotto = %d\n", prod);
  printf("Quoziente = %d\n", quoz);
  printf("Resto = %d\n", resto);
  printf("-------------");

  return 0;
}
