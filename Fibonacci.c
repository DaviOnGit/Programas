#include <stdio.h>

int main(void) 
{
  int num = 0, fib = 0;
  do 
    {
      printf("Quantos dígitos você quer?\n");
      scanf("%i", &num);
    }
  while (num<1);
  int f1=0, f2=1;
    for (;num>0;num--)
      {
        printf("%i\n", f1);
        int somaF = f1 + f2;
        f1 = f2;
        f2 = somaF;
      }
  return 0;
}