#include <stdio.h>
#include <string.h>

int main () {

    char s[100001];
    fgets(s, 100001, stdin);

    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}


/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
*/