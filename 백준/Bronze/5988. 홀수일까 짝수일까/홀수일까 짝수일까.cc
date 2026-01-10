#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        cout << (str[str.length()-1]%2==0?"even":"odd") << "\n";
    }
}