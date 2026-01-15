#include <iostream>

using namespace std;

int main() {
    double n,a,b,c,d,e;
    cin >> n;
    cout << fixed;
    cout.precision(2);
    for (int i=0;i<n;i++){
        cin >> a >> b >> c >> d >> e;
        cout << "$" << a*350.34+b*230.9+c*190.55+d*125.30+e*180.9 << "\n";
    }
}