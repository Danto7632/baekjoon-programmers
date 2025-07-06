#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n%=8;
    if (n==0){
        n=2;
    }
    else if (n==7){
        n=3;
    }
    else if (n==6){
        n=4;
    }
    cout << n;
}