#include <iostream>

using namespace std;

int main() {
    int n,a;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        cout << a << " is " << (a%2==0?"even\n":"odd\n");
    }
}