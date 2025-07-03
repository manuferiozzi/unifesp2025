#include <stdio.h>

int main() {
    int C;
    char T;
    float M[12][12], soma = 0.0;

    scanf("%d", &C);
    scanf(" %c", &T);

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for (int i = 0; i < 12; i++)
        soma += M[i][C];

    if (T == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 12.0);

    return 0;
}
