#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int sum=0;
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        sum+=(s[i]>=65?s[i]-55:s[i]-48)*pow(16,s.length()-1-i);
    }
    cout << sum;
}