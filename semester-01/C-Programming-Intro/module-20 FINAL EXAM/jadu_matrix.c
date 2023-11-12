#include <stdio.h>

int check_jadu_matrix(int matrix[100][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i != j && i + j != N - 1) && matrix[i][j] != 0) {
                return 0;
            }
   
            if ((i == j || i + j == N - 1) && matrix[i][j] != 1) {
                return 0; 
            }
        }
    }
    return 1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[100][100];

    // Input matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if it's a Jadu Matrix
    if (check_jadu_matrix(matrix, N, M)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
