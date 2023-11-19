#include <bits/stdc++.h>
using namespace std;

int main() {
 string line;
  while (getline(cin, line)) {
    for (char& c : line) {
      c = tolower(c);
    }

    line.erase(remove_if(line.begin(), line.end(), [](char c) { return isspace(c) && c == ' '; }), line.end());
    sort(line.begin(), line.end());
    cout << line << endl;
  }

  return 0;
}


/*
    Q: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/monkey-1-2/
    Solve With Google Bard: LOL

*/