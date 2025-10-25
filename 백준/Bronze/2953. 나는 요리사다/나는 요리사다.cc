#include <iostream>

using namespace std;

int main() {
    int a,n,sum,msum=0;
    for (int i=0;i<5;i++){
        sum=0;
        for (int j=0;j<4;j++){
            cin >> a;
            sum+=a;
        }
        msum=msum>sum?msum:sum;
        n=msum>sum?n:i+1;
    }
    cout << n << " " << msum;
}