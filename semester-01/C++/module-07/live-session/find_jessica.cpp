#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, X;
        cin >> S >> X;

        long long int position = S.find(X);

        while (position != string::npos) {
            S.replace(position, X.length(), "#");
            position = S.find(X, position + 1);
        }

        cout << S << endl;
    }

    return 0;
}