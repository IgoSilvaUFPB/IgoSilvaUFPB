#include <stdio.h>

void wait(){
  char i = ' ';
  while(i != '\n'){
    scanf("%c", &i);
  }
}

int main(void) {
  int ar[] = {10, 15, 4, 25, 3, -4};
  int *p = &ar[2];

  printf("======== EXERCITANDO PONTEIROS ========\n\n");
  printf("->       Tecle ENTER para revelar a resposta e continuar       <-\n");
  printf("-> O ponteiro é retornado à posição original a cada altenativa <-\n");
  printf("->           Lembre-se que um inteiro ocupa 4 bytes!           <-\n\n");
  
  printf("Quais são os resultados das avaliações das seguintes expressões?\n\n");
  printf("Sempre considere:\nint ar[] = {10, 15, 4, 25, 3, -4};\nint *p = &ar[2];\n\n");

  printf("(a) *(p + 1)");
  wait();
  printf("Resposta: %d\n", *(p + 1));  
  wait();
  printf("(b) p[-1]");
  wait();
  printf("Resposta: %d\n", p[-1]);
  wait();
  printf("(c) ar[*p++]");
  wait();
  printf("Resposta: %d\n", ar[*p++]);
  p--;
  wait();
  printf("(d) *(ar + ar[2])");
  wait();
  printf("Resposta: %d\n", *(ar + ar[2]));
  printf("ar = %d\n", ar);
  printf("ar[2] = %d\n", ar[2]);
  wait();
  printf("(e) (&ar[4] - p)");
  wait();
  printf("Resposta: %d\n", (&ar[4] - p));
  printf("&ar[4] = %d\n", &ar[4]);
  printf("p = %d\n", p);
  wait();
  printf("(f) sizeof(ar) / sizeof(ar[0])");
  wait();
  printf("Resposta: %d\n", sizeof(ar) / sizeof(ar[0]));
  printf("sizeof(ar) = %d\n", sizeof(ar));
  printf("sizeof(ar[0]) = %d\n", sizeof(ar[0]));
  wait();
  printf("(g) p - ar");
  wait();
  printf("Resposta: %d\n", p - ar);
  printf("p = %d\n", p);
  printf("ar = %d\n", ar);
  wait();
  printf("(h) &p");
  wait();
  printf("Resposta: %d ou %x(hexadecimal)\n", &p, &p);
  wait();
  printf("(i) ar[p - ar]");
  wait();
  printf("Resposta: %d\n", ar[p - ar]);
  printf("p = %d\n", p);
  printf("ar = %d\n", ar);
  wait();
  printf("(j) ar + 3");
  wait();
  printf("Resposta: %d\n", ar + 3);
  printf("ar = %d\n", ar);
  wait();
  printf("(k) *(p += 1)");
  wait();
  printf("Resposta: %d\n", *(p += 1));
  p--;
  wait();
  printf("(l) *(ar + 2)");
  wait();
  printf("Resposta: %d\n", *(ar + 2));
  wait();
  printf("(m) ar[ar[4]]");
  wait();
  printf("Resposta: %d\n", ar[ar[4]]);  
  wait();
  printf("(n) (*p)--");
  wait();
  printf("Resposta: %d\n", (*p)--);
  printf("*p = %d devido ao pós-decremento.\n", *p);
  *p = 4;  
  wait();
  printf("(o) *(ar + (*p - ar[4]))");
  wait();
  printf("Resposta: %d\n", *(ar + (*p - ar[4])));
  printf("ar[4] = %d\n", ar[4]);
  printf("*p = %d\n", *p);
  wait();
  printf("(p) *(++p)");
  wait();
  printf("Resposta: %d\n", *(++p));
  p--;
  printf("*p = %d\n", *p);
  wait();
  printf("(q) &ar[2]");
  wait();
  printf("Resposta: %d\n", &ar[2]);
  wait();
  printf("(r) *(ar + (p - &ar[2]))");
  wait();
  printf("Resposta: %d\n", *(ar + (p - &ar[2])));
  printf("&ar[2] = %d\n", &ar[2]);
  printf("p = %d\n", p);
  wait();
  printf("(s) ar[p - &ar[0]]");
  wait();
  printf("Resposta: %d\n", ar[p - &ar[0]]);
  printf("&ar[0] = %d\n", &ar[0]);
  printf("p = %d\n", p);
  wait();
  printf("Exercício terminado.\n\n");
  printf("---------------------------------------------------------------\n");
  printf("Igó Silva - Ciência de Dados e Inteligência Artificial - 2022.2");
  return 0;
}