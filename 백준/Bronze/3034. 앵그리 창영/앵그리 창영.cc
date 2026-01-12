#include <iostream>

using namespace std;

int main() {
    int n,a,b,leng;
    cin >> n >> a >> b;
    for (int i=0;i<n;i++){
        cin >> leng;
        cout << (a*a+b*b>=leng*leng?"DA":"NE") << "\n";
    }
}