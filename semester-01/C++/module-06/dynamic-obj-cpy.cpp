#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

int main () {

    Person* Johnny = new Person("Johnny", 20);
    Person* BhaiJaan = new Person("BhaiJaan", 30);

    *Johnny = *BhaiJaan; // Copy the contents of BhaiJaan to Johnny
    delete BhaiJaan; // Clear the memory allocated to BhaiJaan
    cout << Johnny->name << " " << Johnny->age << endl; // BhaiJaan 30
    return 0;
}