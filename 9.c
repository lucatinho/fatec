#include <stdio.h>

int main(){

  int i,letra;

  printf("Informe sua idade: \n");
  scanf("%d", &i);
  printf("Informe sua categoria\n\n[1]Baixo\n[2]Medio\n[3]alto\n");
  scanf("%d", &letra);

  if (i>=18 && i<=24)
      {
          if(letra==1)
          {
              printf("Seu codigo e: 7");
          }
          else if (letra==2)
          {
              printf("Seu codigo e: 8");
          }
          else
          {
              printf("Seu codigo e: 9");
          }
      }
  if (i>=25 && i<=40)
          {
              if(letra==1)
              {
                  printf("Seu codigo e: 4");
              }
              else if (letra==2)
              {
                  printf("Seu codigo e: 5");
              }
              else
              {
                  printf("Seu codigo e: 6");
              }
          }
          if (i>=41 && i<=70)
              {
                  if(letra==1)
                  {
                      printf("Seu codigo e: 1");
                  }
                  else if (letra==2)
                  {
                      printf("Seu codigo e: 2");
                  }
                  else
                  {
                      printf("Seu codigo e: 3");
                  }
              }
  }
