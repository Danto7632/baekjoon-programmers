#include <iostream>

using namespace std;

int main() {
    int n,min=1000,max=0,a;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        min=a<min?a:min;
        max=a>max?a:max;
    }
    cout << max-min;
}