#include <iostream>

using namespace std;

int main() {
    int a,b;
    string num1,num2,op;
    cin >> num1 >> op >> num2;
    a=num1.length()-1;
    b=num2.length()-1;

    if (op=="+"){
        if (a==b){
            cout << 2;
        }
        else{
            cout << 1;
        }
        for (int i=0;i<(a>b?a:b);i++){
            if ((a>b?a:b)-(a>b?b:a)-1==i){
                cout << 1;
            }
            else {
                cout << 0;
            }
        }
    }
    else {
        cout << 1;
        for (int i=0;i<a+b;i++){
            cout << 0;
        }
    }
}