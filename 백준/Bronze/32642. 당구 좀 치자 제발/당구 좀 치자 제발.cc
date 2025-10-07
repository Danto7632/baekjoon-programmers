#include <iostream>

using namespace std;

int main() {
    long long int n,a,bn=0,bnsum=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        bn+=a==1?1:-1;
        bnsum+=bn;
    }
    cout << bnsum;
}