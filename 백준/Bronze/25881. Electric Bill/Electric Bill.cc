#include <iostream>

using namespace std;

int main() {
    int kwhp,kwhp2,n,a;
    cin >> kwhp >> kwhp2 >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        cout << a << " " << (a<=1000?a*kwhp:1000*kwhp+(a-1000)*kwhp2) << "\n";
    }
}