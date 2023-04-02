#include <stdio.h>
#include <string.h>

int main(void) {

  char nomes[1000], *ponteiro, *pointdel, novonome[20], remove[20], listname[20], *novopoint, *complete;
  int menu, cmp, cont = 0, stop = 0, i;
  nomes[0] = '#';
  nomes[1] = '\0';  

  while(stop == 0){
    printf("\n========= MENU =========\nSelecione uma das opções:\n1 - Incluir pessoa\n2 - Listar pessoas\n3 - Remover pessoa\n=> ");
    scanf("%d", &menu);
  
    switch(menu){
      case 1:
        novopoint = &novonome[0];
        
        //Recebe o novo nome
        printf("\nInforme o nome da pessoa a ser adicionada à lista: ");
        scanf("%s", &novonome[0]);
        
        //Busca o ponto para armazenar
        ponteiro = &nomes[0];
        while(*ponteiro != '\0'){
          ponteiro++;
        }
        
        //Copia o novo nome para a lista
        while(*novopoint != '\0'){
          *ponteiro = *novopoint;
          ponteiro++;
          novopoint++;
        }

        //Ajusta terminador da lista
        *ponteiro = '#';
        ponteiro++;
        *ponteiro = '\0';        
      break;
      case 2:
        ponteiro = &nomes[0];
        printf("\n=== LISTA DE PESSOAS CADASTRADAS ===");
        while(*ponteiro != '\0'){
          if(*ponteiro == '#'){
            printf("\n");
          } else {
            printf("%c", *ponteiro);
          }
          ponteiro++;
        }
      break;
      case 3:
        //Recebendo o nome a ser apagado
        printf("\nInforme o nome que você deseja removar da lista: ");
        scanf("%s", &remove[0]);

        //Procurando o nome na lista
        ponteiro = &nomes[0];
        pointdel = &listname[0];
        cmp = 1;
        while(*ponteiro != '\0'){
          if(*ponteiro == '#'){
            *pointdel = '\0';
            cmp = strcmp(listname, remove);
            if(cmp == 0){
              break;
            } else {
              pointdel = &listname[0];
              cont = 0;
            }
          } else {            
            *pointdel = *ponteiro;
            cont++;
            pointdel++;
          }
          ponteiro++;
        }
        
        //Apaga o nome encontrado da lista
        ponteiro--;
        for(i = 0; i < cont; i++){
          *ponteiro = ' ';
          ponteiro--;
        }

        //Informa se a exclusão foi bem sucedida
        if(cont != 0){
          printf("\nO nome \"%s\" foi excluído da lista.\n", listname);
        } else {
          printf("\nO nome \"%s\" não foi encontrado na lista.\n", remove);
        }

        //Removendo espaço em branco
        if(cont != 0){
          ponteiro = &nomes[0];
          while(*ponteiro != ' '){
            complete = ponteiro;
            ponteiro++;
          }
          while(*ponteiro != '#'){
            ponteiro++;
          }
          while(*ponteiro != '\0'){
            *complete = *ponteiro;
            ponteiro++;
            complete++;
          }
          *complete = '\0';
        }        
      break;
      default:        
        printf("Nenhuma opção válida selecionada.\nSaindo do programa.");
        stop = 1;        
      break;
    }
  }
  return 0;
}