#include <iostream>
using namespace std;

int main() {
    char myCharacter;
    myCharacter = 'y';
    
    int myInt;
    myInt = 13;
    
    cout << myCharacter << endl;
    cout << myInt << endl;
    
    myCharacter = 'n';
    myInt = 14;
    
    cout << myCharacter << endl;
    cout << myInt << endl;
    
    int a(14);
    int b = 13;
    
    if (a < b) {
        cout << "a is less than b" << endl;
    } else if (a == b) {
        cout << "a is equal to b" << endl;
    } else {
        cout << "a isn't less than b" << endl;
    }

    
    cout << "You died!\n";
    
    cout << "Press Enter to continue...";
    cin.get();
}
