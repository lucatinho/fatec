#include <stdio.h>

int main() {

// aprovado media>=7; solicitar nota exame media <7 ; media >=5
//aprovado se nao informar tbm

float n1,n2,n3,n4,m1;

printf("Digite as 4 notas:\n");
scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
m1=(n1+n2+n3+n4)/4;
if(m1>=7){
  printf("Aprovado, media %.2f", m1);
}else{
  printf("Recuperacao, media: %.2f.\n\n Informe a nota do exame: ", m1);
  scanf("%f", &n1);
  m1=(n1+m1)/2;
  if (m1>=5) {
    printf("aprovado, media: %.2f", m1);
  }else{printf("Reprovado, media: %.2f", m1);}
}
}
