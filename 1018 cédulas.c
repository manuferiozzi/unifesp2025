#include <stdio.h>

int main() {
    int N, nota;
    scanf("%d", &N);
    printf("%d\n", N);

    nota = N / 100;
    printf("%d nota(s) de R$ 100,00\n", nota);
    N %= 100;

    nota = N / 50;
    printf("%d nota(s) de R$ 50,00\n", nota);
    N %= 50;

    nota = N / 20;
    printf("%d nota(s) de R$ 20,00\n", nota);
    N %= 20;

    nota = N / 10;
    printf("%d nota(s) de R$ 10,00\n", nota);
    N %= 10;

    nota = N / 5;
    printf("%d nota(s) de R$ 5,00\n", nota);
    N %= 5;

    nota = N / 2;
    printf("%d nota(s) de R$ 2,00\n", nota);
    N %= 2;

    nota = N / 1;
    printf("%d nota(s) de R$ 1,00\n", nota);

    return 0;
}
