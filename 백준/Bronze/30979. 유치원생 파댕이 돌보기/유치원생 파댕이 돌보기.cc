#include <iostream>

using namespace std;

int main() {
    int T,N,F;
    cin >> T >> N;
    for (int i=0;i<N;i++){
        cin >> F;
        T-=F;
    }
    cout << (T<1?"Padaeng_i Happy":"Padaeng_i Cry");
}