#include <iostream>

using namespace std;

int main() {
    int n,T,a,count=0;
    cin >> n >> T;
    for (int i=0;i<n;i++){
        cin >> a;
        T-a>=0?count++:0;
        T-=a;
    }
    cout << count;
}