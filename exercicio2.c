#include<stdio.h>
int somarec(int x, int n)
{
  if (n == 0 || n == 1) {
    return x;
  }
  else {
    return (x + somarec(x, n-1));
  }
}

int exercicio2() {
  int x = 7, n = 3;

  printf("\nExercicio 2: %d somado %d vezes = %d\n", x, n, somarec(x,n));

}