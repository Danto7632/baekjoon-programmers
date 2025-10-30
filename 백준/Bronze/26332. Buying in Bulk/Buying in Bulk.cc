#include <iostream>

using namespace std;

int main() {
    int n,c,p;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> c >> p;
        cout << c << " " << p << "\n" << c*p+2*(1-c) << "\n";
    }
}