#include <iostream>

using namespace std;

int main() {
    int n,sn=0;
    string str,sstr;

    for (int i=0;i<7;i++){
        cin >> str >> n;
        if (n>sn){
            sstr=str;
            sn=n;
        }
    }
    cout << sstr;
}