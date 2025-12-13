#include <iostream>

using namespace std;

int main() {
    int sum=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        sum+=str[i];
    }
    cout << (char)(2015-sum);
}