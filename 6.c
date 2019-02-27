#include <stdio.h>

int main() {

int i;

printf("Informe sua idade: ");
scanf("%d", &i);

if (i>=5 && i<=7) {
  printf("\n\nSua categoria é infatil A");
}
else if (i>=8 && i<=10) {
  printf("\n\nSua categoria é infatil B");
}
else if (i>11 && i<=13) {
  printf("\n\nSua categoria é juvenil A");
}
else if (i>=14 && i<=17) {
  printf("\n\nSua categoria é juvenil B");
}
else if (i>=18) {
  printf("\n\nSua categoria é Senior");
}
}
//6
