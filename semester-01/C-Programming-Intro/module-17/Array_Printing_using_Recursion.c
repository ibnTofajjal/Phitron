#include <stdio.h>


void fun(int arr[], int n, int i){

    // Base Controll
    if ( i == n) return;
    printf("%d ", arr[i]);
    // Now Recursive it to print all the indexes Values
    fun(arr, n, i+1); // increasing index slot.
}

int main () {

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, n, 0); // 0 index dhore nisi
    
    return 0;
}