#include <stdio.h>

int main()
{
    char S[10001];
    scanf("%s", S);

    int count[26] = {0};
    int idx;
    for (int i = 0; S[i] != '\0'; i++)
    {
        idx = S[i] - 'a';
        count[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    printf("\n");

    return 0;
}