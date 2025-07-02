#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char frase[51];
        int deslocamento;

        scanf("%s", frase);
        scanf("%d", &deslocamento);

        int len = strlen(frase);

        for (int j = 0; j < len; j++) {
            frase[j] = ((frase[j] - 'A' - deslocamento + 26) % 26) + 'A';
        }

        printf("%s\n", frase);
    }

    return 0;
}
