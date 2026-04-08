#include <iostream>

using namespace std;

int main() {
    int count=1;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i]==','){
            count++;
        }
    }
    cout << count;
}