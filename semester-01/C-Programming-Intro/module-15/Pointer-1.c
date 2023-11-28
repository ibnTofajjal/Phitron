#include <stdio.h>

int main() {
    
    int x=10; 
    int *ptr = &x;
    
    printf("Amra Pointer er maddhome X er Value dekhtesi: %d\n", *ptr); 
    
    printf("Amra Direct X er address print kortesi: %p\n", &x);
    printf("Amra Pointer er maddhome X er address print kortesi: %p\n", ptr);
    
    *ptr = 100;
    printf("Amra Pointer er maddhome X er Value Change korechi: %d\n", *ptr);
    printf("Amra Direct X er address print kortesi: %p\n", &x);
    printf("Amra Pointer er maddhome X er address print kortesi: %p\n", ptr);
    
    return 0;
}