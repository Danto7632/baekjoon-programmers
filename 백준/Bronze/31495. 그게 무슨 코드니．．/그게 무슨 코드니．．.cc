#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    cout << (str.length()>2&&(str[0]=='\"'&&str[str.length()-1]=='\"')?str.substr(1, str.length()-2):"CE");
}