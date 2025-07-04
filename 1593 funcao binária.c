#include <stdio.h>
#include <string.h>

int divide(char *num) {
    int i, r = 0, len = strlen(num);
    char res[1100];
    int pos = 0;

    for (i = 0; i < len; i++) {
        int d = r * 10 + (num[i] - '0');
        res[pos++] = d / 2 + '0';
        r = d % 2;
    }

    for (i = 0; i < pos && res[i] == '0'; i++);
    res[pos] = '\0';
    if (i < pos) strcpy(num, res + i);
    else strcpy(num, "0");

    return r;
}

int contaUns(char *num) {
    int cont = 0;
    while (strcmp(num, "0") != 0)
        cont += divide(num);
    return cont;
}

int main() {
    int T;
    char num[1100];
    scanf("%d", &T);
    while (T--) {
        scanf("%s", num);
        printf("%d\n", contaUns(num));
    }
    return 0;
}
