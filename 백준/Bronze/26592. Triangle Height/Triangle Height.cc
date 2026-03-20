#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double a,b;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        cout << fixed;
        cout << setprecision(2);
        cout << "The height of the triangle is " << a*2/b << " units\n";
    }
}