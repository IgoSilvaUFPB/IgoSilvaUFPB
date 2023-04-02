#include <stdio.h>

int fat (int num) {
  	if (num == 0) {
  		return 1;
  	} else {
      //chamando a função dentro dela mesma
  		return num*fat(num-1);
  	}
}

int main(){
  int numero;  
  
  printf("Qual valor você deseja saber o fatorial: \n");
  scanf("%d", &numero);
  
  printf("O fatorial de %d è %d", numero, fat(numero));
  return 0;
}
