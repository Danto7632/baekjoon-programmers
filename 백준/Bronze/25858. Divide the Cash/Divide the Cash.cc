#include <iostream>

using namespace std;

int main() {
    int n,a[30],money,count=0;
    cin >> n >> money;
    for (int i=0;i<n;i++){
        cin >> a[i];
        count+=a[i];
    }
    for (int i=0;i<n;i++){
        cout << a[i]*money/count << "\n";
    }
}