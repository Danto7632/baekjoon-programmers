#include <iostream>

using namespace std;

int main() {
    int n,a,b,max=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        max=a*b>max?a*b:max;
    }
    cout << max;
}