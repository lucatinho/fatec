#include <stdio.h>
#include <math.h>

int main() {

int valor, raiz;
float n1,n2,soma;

printf ("1-Soma\n2-Raiz quadrada\n3-Finalizar\n\n");
scanf("%d", &valor);

switch ( valor ){

case 1 :
printf ("Digite os valores a serem somados:\n");
scanf("%f %f", &n1, &n2);
soma=n1+n2;
printf("O resultado e %.2f", soma);
break;

case 2 :
printf ("Informe o numero: ");
scanf("%d", &raiz);
raiz= sqrt(raiz);
printf("O resultado: %d", raiz);
break;

case 3 :
break;

}
return 0;
}
