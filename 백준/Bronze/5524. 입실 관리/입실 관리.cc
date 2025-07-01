#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        for (int j=0;j<str.length();j++){
            if (str[j]<97){
                cout << (char)(str[j]+32);
            }
            else {
                cout << str[j];
            }
        }
        cout << "\n";
    }
    
}