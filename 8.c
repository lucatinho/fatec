#include <stdio.h>

int main() {
  int c;
  printf("***** Informe seu cargo *******\n[1]Escrituario\n[2]Secretario\n[3]Caixa\n[4]Gerente\n[5]Diretor\n\n");
  scanf("%d", &c);

  if (c==1) {
    printf("Voce tem direito de receber 50 porcento de aumento");
  }
  if (c==2) {
    printf("Voce tem direito de receber 35 porcento de aumento");
  }
  if (c==3) {
    printf("Voce tem direito de receber 20 porcento  de aumento");
  }
  if (c==4) {
    printf("Voce tem direito de receber 10 porcento  de aumento");
  }
  if (c==5){
    printf("Não tem aumento");
  }
  return 0;
}
