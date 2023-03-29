#include <stdio.h>

//Função que recebe o endereço do início do vetor com argumento e o imprime
void printvetor (int *vtr){
  int i;
  int *ptr = vtr;
  printf("[");
  for (i = 0; i < 10; i++) {
    if (i == 9)
      printf("%d", *ptr++);
    else
      printf("%d-", *ptr++);
  }
  printf("]\n");
}

int main () {
  int A[10], B[10];
  int i;
  int *pont;
  for (i = 0; i < 10; i++){
    int num = 0;
    printf("Informe o %dº elemento do vetor A: ", i+1);
    scanf("%d", &A[i]);
    B[i] = A[i]*A[i];
  }
	//Imprimindo os vetores utilizando a função e passando os endereços como argumento
  printf("Vetor A: ");
  printvetor(&A);
  printf("Vetor B: ");
  printvetor(&B);
  return 0; 
}