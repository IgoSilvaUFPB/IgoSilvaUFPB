#include <stdio.h>

int main(void) {
  
  int i = 1;
  char string[50], *letra = &string[0], *letra2 = &string[0];
  
  printf("Informe uma string\n");
  scanf("%s", &string[0]);
  
  //Manda o *letra para o final da string e volta uma posição
  while(*letra != '\0'){
    letra++;    
  }
  letra--;

  //Percorre a string nos dois sentidos comparando os caracteres
  while(*letra2 != '\0'){
    printf("%c x %c\n", *letra, *letra2);
    letra2++;
    letra--;
    if(*letra != *letra2){
      //Altera a variável de controle e
      //interrompe o loop se uma diferença é encontrada
      i = 0;
      break;
    }  
  }

  //Imprime o resultado de acordo com a variável de controle
  switch(i){
    case 0:
      printf("Não são palíndromos");
    break;
    case 1:
      printf("São palíndromos");
    default:
    break;
  }
  
  return 0;
}