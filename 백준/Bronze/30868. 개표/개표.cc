#include <iostream>

using namespace std;

int main() {
    int T,n;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n;
        for (int j=0;j<n/5;j++){
            cout << "++++ ";
        }
        for (int k=0;k<n%5;k++){
            cout << "|";
        }
        cout << "\n";
    }
}