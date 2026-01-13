#include <iostream>

using namespace std;

int main() {
    int n,a;
    cin >> n >> a;
    while (a!=0){
        if (a%n==0){
            cout << a << " is a multiple of " << n << ".\n";
        }
        else {
            cout << a << " is NOT a multiple of " << n << ".\n";
        }
        cin >> a;
    }
}