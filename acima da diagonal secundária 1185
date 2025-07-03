#include <stdio.h>

int main() {
    char O;
    float M[12][12], soma = 0.0;

    scanf(" %c", &O);

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12 - 1 - i; j++)
            soma += M[i][j];

    if (O == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 66.0);

    return 0;
}








Perguntar ao ChatGPT
