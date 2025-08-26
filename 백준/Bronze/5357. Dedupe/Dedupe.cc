#include <iostream>

using namespace std;

int main() {
    int n;
    char memo;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        memo=str[0];
        cout << memo;
        for (int j=1;j<str.length();j++){
            if (memo!=str[j]){
                memo=str[j];
                cout << memo;
            }
        }
        cout << "\n";
    }
}