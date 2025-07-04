#include <stdio.h>

int main() {
    int numero, horas;
    float valorHora, salario;
    scanf("%d %d %f", &numero, &horas, &valorHora);
    salario = horas * valorHora;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
