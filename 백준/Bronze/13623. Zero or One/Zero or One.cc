#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a+b+c==3||a+b+c==0){
        cout << "*";
    }
    else if (a+b+c==2){
        if (a==0){
            cout << "A";
        }
        else if (b==0){
            cout << "B";
        }
        else {
            cout << "C";
        }
    }
    else {
        if (a==1){
            cout << "A";
        }
        else if (b==1){
            cout << "B";
        }
        else {
            cout << "C";
        }
    }
}