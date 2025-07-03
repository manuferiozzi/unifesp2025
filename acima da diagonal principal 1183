#include <stdio.h>

int main() {
    char O;
    float M[12][12], soma = 0.0;
    int i, j;

    scanf(" %c", &O);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for (i = 0; i < 12; i++)
        for (j = i + 1; j < 12; j++)
            soma += M[i][j];

    if (O == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 66.0);

    return 0;
}
