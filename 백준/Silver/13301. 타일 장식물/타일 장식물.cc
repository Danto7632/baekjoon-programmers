#include <iostream>

using namespace std;

int main() {
    int n,n1=4,n2=6,n3;
    cin >> n;
    if (n>=3){
        for (int i=3;i<=n;i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
    }
    else if (n==1){
        n3=n1;
    }
    else if (n==2){
        n3=n2;
    }
    cout << n3;
}