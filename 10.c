#include <stdio.h>
int main()
{

    float n1,n2,h;

    printf("Informe o numero de horas extras: ");
    scanf("%f", &n1);
    printf("Informe o numero de horas falta: ");
    scanf("%f", &n2);
    h=(n1)-(2/3*n2);

    if (600>=h)
    {
        printf("\nO valor do premio e: 100");
    }
    else if(600<h>=1200)
        {
            printf("\nO valor do premio e: 200");
        }
    else if(1200>h>=1800)
        {
            printf("\nO valor do premio e: 300");
        }
    else if(1800<h>=2400)
        {
            printf("\nO valor do premio e: 400");
        }
    else
    {
        printf("\nO valor do premio e: 500");
    }
}
