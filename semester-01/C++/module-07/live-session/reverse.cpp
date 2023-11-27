#include <bits/stdc++.h>
using namespace std;

class Product {

    public: 

    string name;
    char section;
    double marks;

};

int main () {

    
    int n;
    cin >> n;
    Product productObj[n];

    for(Product &x : productObj) cin >> x.name >> x.section >> x.marks;

    reverse(productObj, productObj + n);

    for(Product x : productObj) cout << x.name << " " <<  x.section << " " <<  x.marks << endl;


    return 0;
}