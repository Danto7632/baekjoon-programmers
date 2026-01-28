#include <iostream>

using namespace std;

int main() {
    bool flag=false;
    string str;
    for (int i=0;i<5;i++){
        cin >> str;
        for (int j=0;j<str.length()-2;j++){
            if (str[j]=='F'&&str[j+1]=='B'&&str[j+2]=='I'){
                flag=true;
                cout << i+1 << " ";
                break;
            }
        }
    }
    if (flag==0){
        cout << "HE GOT AWAY!";
    }
}