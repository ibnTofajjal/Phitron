#include <stdio.h>

int main()
{
    int test_case;           
    scanf("%d", &test_case); 

    for (int t = 1; t <= test_case; t++)
    {                   
        char S[10001];  
        scanf("%s", S); 

        int upper_case = 0, lower_case = 0, digit = 0, i = 0; 
        for (int i = 0; S[i] != '\0'; i++)
        { 
            if (S[i] >= 'A' && S[i] <= 'Z')
            {           
                upper_case++; 
            }
            else if (S[i] >= 'a' && S[i] <= 'z')
            {            
                lower_case++; 
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {           
                digit++; 
            }
        }

        printf("%d %d %d\n", upper_case, lower_case, digit); 
    }

    return 0;
}