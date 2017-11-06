//Programma che resituisce il maggiore tra due interi
#include <stdio.h>
int main()
{
   int num1, num2;
   printf("-----Inserisci due valori-----\n");
   printf("1) Valore = ");
   scanf("%d",&num1);
   printf("\n2) Valore = ");
   scanf("%d",&num2);
   printf("------------------------------\n");
   printf("\n----------Attenzione----------");
   printf("\nIl numero più grande e' = ");
   if(num1>num2)
	printf("%d",num1);
   else
	printf("%d",num2);
  printf("\n------------------------------\n");

   return 0;
}
