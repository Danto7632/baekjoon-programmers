#include <iostream>

using namespace std;

int main() {
    int count=0;
    string str;
    while (1){
        cin >> str;
        if (cin.eof()){
            break;
        }
        else if (str=="for"){
            count++;
        }
        
    }
    cout << count;
}