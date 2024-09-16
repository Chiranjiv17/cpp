#include <iostream>
using namespace std;

void print(int i) {
    cout << "Printing integer: " << i << endl;
}

void print(double d) {
    cout << "Printing double: " << d << endl;
}

void print(const string& s) {
    cout << "Printing string: " << s << endl;
}

int main() {
    int myInt = 4;
    double myDouble = 2.4;
    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "     " abcdefghijklmnopqrstuvwxyz ";
    
    print(myInt);      
    print(myDouble);  
    print(myString);   

}

