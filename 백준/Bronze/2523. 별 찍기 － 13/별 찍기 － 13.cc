#include <iostream>

using namespace std;

int main() {
    int n,check=0;
    cin >> n;
    for (int i=0;i<2*n-1;i++){
        if (i<n){
            for (int j=0;j<i+1;j++){
                cout << "*";
            }
        }
        else {
            for (int j=i-n;j<n-1;j++){
                cout << "*";
            }
        }
        cout << "\n";
    }
}