#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for (int i=0;i<n;i++){
        getline(cin,str);
        cout << str;
        if (str[str.length()-1]!='.'){
            cout << ".";
        }
        cout << "\n";
    }
}