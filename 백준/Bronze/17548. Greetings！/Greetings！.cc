#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    cout << 'h';
    for (int i=0;i<(str.length()-2)*2;i++){
        cout << 'e';
    }
    cout << 'y';
}