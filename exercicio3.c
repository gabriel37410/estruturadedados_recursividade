#include<stdio.h>
int n = 762021192;
int k = 2;
int q = 0;

int verifica(int n)
{
    if(n==0)
      return 0;
     else
    {
     if(k==(n % 10))
     {
        q++;
     }
     n=n / 10;
     return verifica(n);
    }
return 0;
 }
int exercicio3() {
  verifica(n);

  printf("\nExercicio 3: O numero %d se repete %x vezes no numero %d\n", k, q, n);

}