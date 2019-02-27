#include <stdio.h>
int main(){
  int a,b,c;
  printf("informe o valor dos tres lados do triangulo:\n");
  scanf("%d %d %d", &a, &b, &c);
  if ((a == b)&&(b==c)){
  printf("O triangulo e equilatero.");
}else if ((a == b)||(b==c)) {
  printf("O triangulo e isosceles.");
}else{
printf("O triangulo e escaleno.");}}
