#include <stdio.h>

int main(){
  float salario;

  printf("Informe seu salario: ");
  scanf("%f", &salario);

if(salario<500){
salario=salario+(salario*0.3);
printf("Seu salario reajustado fica em %.2f\n", salario);
}else{printf("Voce nao tem direito ao reajuste");}
}
