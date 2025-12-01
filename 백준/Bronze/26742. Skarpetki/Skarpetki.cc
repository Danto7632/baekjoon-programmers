#include <iostream>

using namespace std;

int main() {
    int b=0,c=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i]=='B'){
            b++;
        }
        else {
            c++;
        }
    }
    cout << b/2+c/2;
}