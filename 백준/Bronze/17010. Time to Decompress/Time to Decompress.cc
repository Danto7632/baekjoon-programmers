#include <iostream>

using namespace std;

int main() {
    int n,count;
    char c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> count >> c;
        for (int j=0;j<count;j++){
            cout << c;
        }
        cout << "\n";
    }
}