#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void calculate_difference(int A[], int B[], int C[], int N) {
    for (int i = 0; i < N; i++) {
        C[i] = abs(A[i] - B[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++) {
            B[i] = A[i];
        }

        qsort(B, N, sizeof(int), compare);
        calculate_difference(A, B, C, N);

        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }

        printf("\n");
    }

    return 0;
}
