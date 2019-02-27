#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite 3 numeros não negativos:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 > n3) {
        float tmp = n3;
        n3 = n1;
        n1 = tmp;
    }
    if (n1 > n2) {
        float tmp = n2;
        n2 = n1;
        n1 = tmp;
    }
    if (n2 > n3) {
        float tmp = n3;
        n3 = n2;
        n2 = tmp;
    }
    printf("%f %f %f", n1, n2, n3);
}
