#include <stdio.h>

int main(void) {
    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o primeiro Inteiro\n");
    scanf("%d", &inteiro1);

    printf("Digite o segundo Inteiro\n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("A soma é %d\n", soma);

    return 0;
}