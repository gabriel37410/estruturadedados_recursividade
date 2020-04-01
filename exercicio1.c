#include<stdio.h>
int potenciarec(int x, int n)
{
  if (n == 0) {
    return 1;
  }
  else {
    return (x * potenciarec(x, n-1));
  }
}

int exercicio1() {
  int x = 5, n = 3;

  printf("\nExercicio 1: Potencia de %d elevado a %d = %d\n", x, n, potenciarec(x,n));

}