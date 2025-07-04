#include <stdio.h>

int main() {
    char nome[100];
    double salarioFixo, vendas, total;
    scanf("%s", nome);
    scanf("%lf %lf", &salarioFixo, &vendas);
    total = salarioFixo + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
