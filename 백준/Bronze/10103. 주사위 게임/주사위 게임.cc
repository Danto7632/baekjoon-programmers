#include <iostream>

using namespace std;

int main() {
    int a=100,b=100,n,ad,bd;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> ad >> bd;
        if (ad>bd){
            b-=ad;
        }
        else if (ad<bd){
            a-=bd;
        }
    }
    cout << a << "\n" << b;
}