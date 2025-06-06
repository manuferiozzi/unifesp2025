#include <stdio.h>
#include <string.h>

#define MAX 26  // 26 letras do alfabeto ('A' a 'Z')

typedef struct {
    int incorrect;
    int correct_time;
    int is_correct;
} Problem;

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        Problem problems[MAX] = {0};

        for (int i = 0; i < N; i++) {
            char prob_id;
            int time;
            char verdict[10];

            scanf(" %c %d %s", &prob_id, &time, verdict);

            int idx = prob_id - 'A';

            if (strcmp(verdict, "correct") == 0 && !problems[idx].is_correct) {
                problems[idx].is_correct = 1;
                problems[idx].correct_time = time;
            } else if (strcmp(verdict, "incorrect") == 0 && !problems[idx].is_correct) {
                problems[idx].incorrect++;
            }
        }

        int S = 0, P = 0;

        for (int i = 0; i < MAX; i++) {
            if (problems[i].is_correct) {
                S++;
                P += problems[i].correct_time + problems[i].incorrect * 20;
            }
        }

        printf("%d %d\n", S, P);
    }

    return 0;
}

