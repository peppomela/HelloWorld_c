//Programma che trova il maggiore di cinque numeri
#include <stdio.h>
int main()
{
   int num1, num2, num3, num4, num5, max;
   printf("-----Inserisci cinque valori-----\n");
   printf("1) Valore = ");
   scanf("%d",&num1);
   printf("2) Valore = ");
   scanf("%d",&num2);
   printf("3) Valore = ");
   scanf("%d",&num3);
   printf("4) Valore = ");
   scanf("%d",&num4);
   printf("5) Valore = ");
   scanf("%d",&num5);
   printf("------------------------------\n");
   printf("\n----------Attenzione----------");
   printf("\nIl numero più grande e' = ");

   max=num1;
   if(num2>max) max=num2;
   if(num3>max) max=num3;
   if(num4>max) max=num4;
   if(num5>max) max=num5;
   printf("%d",max);
   printf("\n------------------------------\n");

   return 0;
}
