#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    cout << str[n-5] << str[n-4] << str[n-3] << str[n-2] << str[n-1];
}