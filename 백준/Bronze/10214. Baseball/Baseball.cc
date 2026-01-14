#include <iostream>

using namespace std;

int main() {
    int n,y,k,a;
    cin >> n;
    for (int i=0;i<n;i++){
        y=0;
        k=0;
        for (int j=0;j<9;j++){
            cin >> a;
            y+=a;
            cin >> a;
            k+=a;
        }
        cout << (y==k?"Draw":y>k?"Yonsei":"Korea") << "\n";
    }
}