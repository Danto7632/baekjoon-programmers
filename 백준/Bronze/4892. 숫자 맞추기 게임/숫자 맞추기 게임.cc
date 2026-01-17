#include <iostream>

using namespace std;

int main() {
    int n;
    for (int i=1;1;i++){
        cin >> n;
        if (n==0){
            break;
        }
        cout << i << (n%2==0?". even ":". odd ") << n/2 << "\n";
    }
}