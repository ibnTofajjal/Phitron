#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);


        int M1_work = M1 * D;
        int M1_M2_work = (M1 + M2) * D;
        int fewer_days = M1_M2_work - M1_work;


        printf("%d\n", fewer_days);
    }

    return 0;
}
