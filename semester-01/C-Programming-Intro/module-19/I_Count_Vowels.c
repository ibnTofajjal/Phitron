#include <stdio.h>

int count_vowel (char line[], int i) {
    if (line[i] == '\0')
    {
        return 0;
    }

    // Recursive Funtion
    int count = count_vowel(line, i+1);

    // Let's Convert Every Capital Character to small Character
    if (line[i] >= 'A' && line[i] <= 'Z')
    {
        line[i] = line[i] + 32; 
    }

    // Let's Check The value of line[i] is vowel or not, if it is vowel then return 1+
    if (line[i]== 'a' || line[i]== 'e' || line[i]== 'i' || line[i]== 'o' || line[i]== 'u')
    {
       return count+1;
    } else {
        return count;
    }
    
} 

int main () {

    char line[200];
    fgets(line,200,stdin);
    int count = count_vowel(line, 0);
    printf("%d", count);

    return 0;
}