#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    while (getline(cin,str)){
        if (str=="END"){
            break;
        }
        for (int i=str.length()-1;i>=0;i--){
            cout << str[i];
        }
        cout << "\n";
    }
}