#include <bits/stdc++.h>
using namespace std;

class Product {

    public: 

    string name;
    char section;
    double marks;

};

bool cmp (Product a, Product b) {
    return ( a.marks < b.marks); // < for max | > for min
}

int main () {

    int n;
    cin >> n;
    Product productObj[n];

    for(Product &x : productObj) cin >> x.name >> x.section >> x.marks;

    Product *max_result = max_element(productObj, productObj + n, cmp);

    cout << max_result->name;

    return 0;
}