#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d%*c", &N);

    for (int i = 0; i < N; i++) {
        char linha[1001];
        fgets(linha, 1001, stdin);

        int len = strlen(linha);
        if (linha[len - 1] == '\n') linha[len - 1] = '\0';
        len = strlen(linha);

        for (int j = 0; j < len; j++) {
            if (isalpha(linha[j])) {
                linha[j] += 3;
            }
        }

        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - 1 - j];
            linha[len - 1 - j] = temp;
        }

        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }

        printf("%s\n", linha);
    }

    return 0;
}
