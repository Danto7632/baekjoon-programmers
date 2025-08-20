#include <iostream>

using namespace std;

int main() {
    int col=0,un=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        col=str[i]==':'?col+1:col;
        un=str[i]=='_'?un+1:un;
    }
    cout << (str.length()+col+un*5);
}