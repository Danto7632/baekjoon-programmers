#include <iostream>

using namespace std;

int main() {
    int n,a,time=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        time+=a;
    }
    cout << ((time+(n-1)*8)/24) << " " << ((time+(n-1)*8)%24);
}