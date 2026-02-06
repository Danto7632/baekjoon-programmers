#include <iostream>

using namespace std;

int main() {
    int n;
    char c;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> c;
        getline(cin,str);
        if (c>=97){
            cout << char(c-32) << str << "\n";
        }
        else {
            cout << c << str << "\n";
        }
    }
}