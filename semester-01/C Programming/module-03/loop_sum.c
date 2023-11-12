#include<stdio.h>


int main  () {

    int sum = 0;
    int i;
    long long int n;

    scanf("%lld", &n);
    for (i=1; i<=n; i++) {
        sum += i;
    }
    printf("summation of i: %d\n", sum);

    
 
}

/*
    Q. How to get the summation of 1 to n?
    A. n(n+1)/2 that's mean n * (n+1) / 2
*/