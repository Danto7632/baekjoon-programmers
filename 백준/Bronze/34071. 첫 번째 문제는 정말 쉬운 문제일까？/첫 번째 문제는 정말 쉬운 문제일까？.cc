#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,a[100],first;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    first=a[0];
    sort(a,a+n);
    cout << (first==a[0]?"ez":first==a[n-1]?"hard":"?");
}