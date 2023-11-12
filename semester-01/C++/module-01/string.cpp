#include <iostream> 
#include <string.h>
#include <string>
using namespace std;

int main () {

    char name[100];
    cin >> name;
    cout << name << endl;

    cin.ignore(); // Ignore the newline character left by previous cin
    
    char fullName[100];
    cin.getline(fullName, 100);
    cout << fullName << endl;


    return 0;
}


/*
    Note: 
        - If We Want to print String with Space then we need to import or include <string> and then we can use cin.getline() fn instead of fgets() in c
        - cin.getlin takes 2 parametar 1 is variable and 2nd one is Variable Size 
*/