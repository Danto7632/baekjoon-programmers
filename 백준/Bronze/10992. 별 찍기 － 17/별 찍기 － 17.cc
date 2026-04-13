#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        if (i+1==n){
            for (int j=0;j<n*2-1;j++){
                cout << "*";
            }
        }
        else {
            for (int j=0;j<n-i-1;j++){
                cout << " ";
            }
            cout << "*";
            for (int j=0;j<i*2-1;j++){
                cout << " ";
            }
            if (i!=0){
                cout << "*";
            }
        }
        cout << "\n";
    }
}