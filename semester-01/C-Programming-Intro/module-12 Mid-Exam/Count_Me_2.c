
#include <stdio.h>
#include <string.h>

int main () {

    char S[100000];
    scanf("%s", S);

    int count = 0;
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
        {
            count++;      
        }
    }
    printf("%d", count);

    return 0;
}


/*
    Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-2-2
*/