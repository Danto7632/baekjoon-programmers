#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    if (str[0]=='F'){
        cout << "Foundation";
    }
    else if (str[0]=='C'){
        cout << "Claves";
    }
    else if (str[0]=='V'){
        cout << "Veritas";
    }
    else if (str[0]=='E'){
        cout << "Exploration";
    }
}