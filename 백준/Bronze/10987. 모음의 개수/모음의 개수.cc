#include <iostream>

using namespace std;

int main() {
    int count=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i]=='a'){
            count++;
        }
        else if (str[i]=='e'){
            count++;
        }
        else if (str[i]=='i'){
            count++;
        }
        else if (str[i]=='o'){
            count++;
        }
        else if (str[i]=='u'){
            count++;
        }
    }
    cout << count;
}