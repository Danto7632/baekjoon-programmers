#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    for (int i=0;i<n;i++){
        cout << (char)(str[i]>97?str[i]-32:str[i]+32);
    }
}