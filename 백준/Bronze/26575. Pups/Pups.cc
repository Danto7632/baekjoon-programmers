#include <iostream>

using namespace std;

int main() {
    int n;
    double a,b,c;
    cin >> n;
    cout << fixed;
    cout.precision(2);
    for (int i=0;i<n;i++){
        cin >> a >> b >> c;
        cout << "$" << a*b*c << "\n";
    }
}