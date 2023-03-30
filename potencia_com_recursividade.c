#include <stdio.h>

//Calcula potencia usando recursividade
double recfunc(double x, int n){
  double result;
  n--;
  if(n != 0)
    result = x * recfunc(x,n);
  return result;
}

int main(void) {
  
  double base;
  int exp;

  printf("Informe o valor da base: ");
  scanf("%lf", &base);
  printf("Informe o valor do expoente: ");
  scanf("%d", &exp);

  printf("O valor de %.0lf elevado a %d é %.0lf", base, exp, recfunc(base, exp));
  
  return 0;
}