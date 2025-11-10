#include <iostream>

using namespace std;

int main() {
    int a=0,b=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i+=2){
        if (str[i]=='A'){
            a+=str[i+1]-48;
        }
        else {
            b+=str[i+1]-48;
        }
    }
    cout << (a>b?'A':'B');
}