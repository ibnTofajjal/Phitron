#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int N; 
        scanf("%d", &N);

        char rounds[N + 1]; 
        scanf("%s", rounds);

        int tiger_wins = 0, pathan_wins = 0;

        for (int i = 0; i < N; i++) {
            if (rounds[i] == 'T') {
                tiger_wins++;
            } else if (rounds[i] == 'P') {
                pathan_wins++;
            }
        }

        if (tiger_wins > pathan_wins) {
            printf("Tiger\n");
        } else if (tiger_wins < pathan_wins) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
