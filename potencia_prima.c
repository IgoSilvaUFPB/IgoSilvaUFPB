#include <stdio.h>
#include <math.h>
int main() {
int x, p, k, max_k, notfound = 0, skip, div;
//Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p e k, com p primo, tais que x=p^k.Escreva uma função que receba um inteiro e verifique se ele é uma potência prima.
printf("Informe o número para verificarmos ser ele é uma potência prima: \n");
scanf("%d", &x);
//determina um limite para testar os expoentes
max_k = log(x) / log(2);
for (p = 2; p < x; p++) {
skip = 0;
//verificar se é primo
for (div = 2; div < p; div++) {
if (p%div == 0) {
skip = 1;
}
}
if (skip == 1) {
continue;
}
//testa os expoentes
for (k = 2; k <= max_k; k++) {
if (x == pow(p,k)) {
printf("%d é uma potência prima do primo %d elevado a %d", x, p, k);
notfound = 1;
}
}
}
if (notfound == 0) {
printf("%d não é potência prima.", x);
}
return 0;
}