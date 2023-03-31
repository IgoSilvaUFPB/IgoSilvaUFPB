#include <stdio.h>

int ordena(int *ponteiro1){
  int *ponteiro2 = ponteiro1;
  int i = 0, inter = 1;
  ponteiro2++;
  
  //Roda o loop de verificação até que não haja mais alteração de ordem
  while (inter != 0){ 
    inter = 0;
    //Compara os elementos do vetor dois a dois
    for (i = 0; i < 9; i++){
      if(*ponteiro1 > *ponteiro2){    
        //Troca a posição dos elementos se necessário
        //Ultilizando a variável intermediária inter
        inter = *ponteiro2;      
        *ponteiro2 = *ponteiro1;
        *ponteiro1 = inter;
      }
      //Avança os ponteiros para o próximo par
      ponteiro1++;
      ponteiro2++;
    }
    //Retorna os ponteiros para o início
    ponteiro1-=9;
    ponteiro2-=9;
  }
  
  //Imprime elementos do vetor
  for (i = 0; i < 10; i++){
    printf("[%d]", *ponteiro1);
    ponteiro1++;
  }  
  
  return 0;
}

int main(void) {
  
  int vetor[10], *point = &vetor[0], i;
  
  printf("Infome 10 números inteiros: \n");
  for (i = 0; i < 10; i++){
    scanf("%d", point);
    point++;
  }

  //Retorna o ponteiro para o início
  point = &vetor[0];

  //Chama função que ordena os elementos em ordem crescente
  ordena(point);
  
  return 0;
}