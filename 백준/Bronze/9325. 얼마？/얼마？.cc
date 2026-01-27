#include <iostream>

using namespace std;

int main() {
    int T,s,n,q,p;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> s >> n;
        for (int j=0;j<n;j++){
            cin >> q >> p;
            s+=q*p;
        }
        cout << s << "\n";
    }
}