#include <iostream>

using namespace std;

int main() {
    int T,n;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> n;
        if (n==300){
            cout << 1;
        }
        else if (n>274){
            cout << 2;
        }
        else if (n>249){
            cout << 3;
        }
        else {
            cout << 4;
        }
        cout << " ";
    }
}