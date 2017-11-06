//Programma che riceve un numero di tre cifre le estrae e le somma tra loro
#include <stdio.h>
int main()
{
   int valore, somma, a,b,c;
   printf("Inserisci un numero di tre cifre = ");
   scanf("%d",&valore);
   if(valore>99&&valore<1000)
   {
      c=valore%10;
      valore=valore/10;
      b=valore%10;
      valore=valore/10;
      a=valore%10;
      somma=a+b+c;
      printf("La somma delle cifre e' %d\n",somma); 
   }
   else
      printf("\nNon hai inserito un valore di tre cifre!!\n");

}
