#include <iostream>

using namespace std;

int main() {
    int a[11],n,B,sum=0;
    double L,S;
    for (int i=0;i<11;i++){
        cin >> a[i];
    }
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> B >> L >> S;
        if (L>=2.0&&S>=17){
            sum+=a[B];
        }
    }
    cout << sum;
}