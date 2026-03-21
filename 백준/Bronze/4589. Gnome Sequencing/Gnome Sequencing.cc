#include <iostream>

using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    cout << "Gnomes:\n";
    for (int i=0;i<n;i++){
        cin >> a >> b >> c;
        cout << (a<b&&b<c||a>b&&b>c?"Ordered\n":"Unordered\n");
    }
}