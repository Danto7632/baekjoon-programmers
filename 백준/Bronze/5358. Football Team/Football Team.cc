#include <iostream>

using namespace std;

int main() {
    string str;
    while (getline(cin,str)){
        for (int i=0;i<str.length();i++){
            if (str[i]=='e'){
                cout << 'i';
            }
            else if (str[i]=='i'){
                cout << 'e';
            }
            else if (str[i]=='I'){
                cout << 'E';
            }
            else if (str[i]=='E'){
                cout << 'I';
            }
            else {
                cout << str[i];
            }
        }
        cout << "\n";
    }
    
}