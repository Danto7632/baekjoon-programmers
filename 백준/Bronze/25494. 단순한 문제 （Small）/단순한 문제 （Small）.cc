#include <iostream>

using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c;
        cout << (a>b?b>c?c:b:a>c?c:a) << "\n";
    }
}