#include <iostream>

using namespace std;

int main() {
    int T,n,a,sum;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n;
        sum=0;
        for (int j=0;j<n;j++){
            cin >> a;
            sum+=a;
        }
        cout << sum << "\n";
    }
}