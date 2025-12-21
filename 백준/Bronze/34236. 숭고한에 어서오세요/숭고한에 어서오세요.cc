#include <iostream>

using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    cin >> a >> b;
    a=b-a;
    for (int i=0;i<n-2;i++){
        cin >> b;
    }
    cout << b+a;
}