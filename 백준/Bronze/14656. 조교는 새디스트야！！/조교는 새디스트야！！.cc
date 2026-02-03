#include <iostream>

using namespace std;

int main() {
    int n,a,count=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        a!=i+1?count++:0;
    }
    cout << count;
}