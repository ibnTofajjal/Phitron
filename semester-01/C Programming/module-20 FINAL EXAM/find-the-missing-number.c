#include <stdio.h>

long long int find_missing_number(long long int M, long long int A, long long int B, long long int C) {
    if (A == 0 || B == 0 || C == 0) {
        return -1;
    }

    long long int D = M / (A * B * C); 

    if (A * B * C * D == M) { 
        return D;
    } else {
        return -1;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
        long long int missing_number = find_missing_number(M, A, B, C);
        printf("%lld\n", missing_number);
    }

    return 0;
}
