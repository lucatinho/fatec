#include <stdio.h>

int soma(int n1, int n2)
{
    int r;
    r = n1 + n2;
    return(r);
}
int subt(int n1, int n2)
{
    float r;
    r = n1 - n2;
    return(r);
}
int mult(int n1, int n2)
{
    int r;
    r = n1 * n2;
    return(r);
}
int divi(int n1, int n2)
{
    float r;
    r = n1 / n2;
    return(r);
}

int main()
{
    int e1;
    float r,n1,n2;

    printf("***** MENU *****\n");
    printf("[1]soma\n[2]subt\n[3]mult\n[4]divi\n[5]sair\n");
    scanf("%d", &e1);

    switch (e1)
    {
    case 1:
        printf("Informe os dois valores a serem somados:\n");
        scanf("%f %f", &n1, &n2);
        r = soma(n1,n2);
        printf("O resultado da soma e: %0.1f", r);
        break;

    case 2:
    printf("Informe os dois valores a serem subtraidos:\n");
    scanf("%f %f", &n1, &n2);
    r = subt(n1,n2);
    printf("O resultado da soma e: %0.1f", r);
        break;

    case 3:
    printf("Informe os dois valores a serem multiplicados:\n");
    scanf("%f %f", &n1, &n2);
    r = mult(n1,n2);
    printf("O resultado da soma e: %0.1f", r);
        break;

    case 4:
    printf("Informe os dois valores a serem divididos:\n");
    scanf("%f %f", &n1, &n2);
    r = divi(n1,n2);
    printf("O resultado da soma e: %0.1f", r);
    break;

    case 5:
    break;
    }
    return 0;
}
