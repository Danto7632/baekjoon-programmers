#include <iostream>

using namespace std;

int main() {
    int n,max,a;
    cin >> n;
    for (int i=0;i<n;i++){
        max=0;
        for (int j=0;j<5;j++){
            cin >> a;
            max=max>a?max:a;
        }
        cout << "Case #" << i+1 << ": " << max << "\n";
    }
}