#include <stdio.h>

int valida_linha(int m[9][9]) {
    for (int i = 0; i < 9; i++) {
        int cont[10] = {0};
        for (int j = 0; j < 9; j++) {
            int num = m[i][j];
            if (num < 1 || num > 9 || cont[num]) return 0;
            cont[num] = 1;
        }
    }
    return 1;
}

int valida_coluna(int m[9][9]) {
    for (int j = 0; j < 9; j++) {
        int cont[10] = {0};
        for (int i = 0; i < 9; i++) {
            int num = m[i][j];
            if (num < 1 || num > 9 || cont[num]) return 0;
            cont[num] = 1;
        }
    }
    return 1;
}

int valida_regioes(int m[9][9]) {
    for (int bloco_i = 0; bloco_i < 3; bloco_i++) {
        for (int bloco_j = 0; bloco_j < 3; bloco_j++) {
            int cont[10] = {0};
            for (int i = bloco_i * 3; i < bloco_i * 3 + 3; i++) {
                for (int j = bloco_j * 3; j < bloco_j * 3 + 3; j++) {
                    int num = m[i][j];
                    if (num < 1 || num > 9 || cont[num]) return 0;
                    cont[num] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n, matriz[9][9];
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &matriz[i][j]);

        int ok = valida_linha(matriz) && valida_coluna(matriz) && valida_regioes(matriz);

        printf("Instancia %d\n", instancia);
        if (ok)
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}
