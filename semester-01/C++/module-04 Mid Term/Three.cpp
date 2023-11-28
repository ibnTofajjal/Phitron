#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool possible = false;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        possible = true;
                        break;
                    }
                }
            }

            if (possible)
            {
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}


/*
    Q: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/choose-three

*/