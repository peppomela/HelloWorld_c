//Programma che resituisce il maggiore tra due interi
#include <stdio.h>
int main()
{
   int num1, num2, max;
   printf("-----Inserisci due valori-----\n");
   printf("1) Valore = ");
   scanf("%d",&num1);
   printf("\n2) Valore = ");
   scanf("%d",&num2);
   printf("------------------------------\n");
   printf("\n----------Attenzione----------");
   printf("\nIl numero più grande e' = ");

   max=num1;
   if(num2>max) max=num2;

   printf("%d",max);
   printf("\n------------------------------\n");

   return 0;
}
