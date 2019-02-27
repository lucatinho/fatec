#include <stdio.h>

int main(){
  float n1,n2,n3,m;

  printf("Informe a nota do labotario: "); scanf("%f", &n1);
    printf("Informe a nota da Av. semestral: "); scanf("%f", &n2);
      printf("Informe a nota do Exame final: "); scanf("%f", &n3);
  m=((n1*2)+(n2*3)+(n3*5))/10;
  printf("Sua media é: %0.1f", m);
}
