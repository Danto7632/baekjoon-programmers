#include <iostream>

using namespace std;

int main() {
    int T,N,A,D,sum;
    cin >> T;
    for (int i=0;i<T;i++){
        sum=0;
        cin >> N >> A >> D;
        for (int j=0;j<N;j++){
            sum+=A;
            A+=D;
        }
        cout << sum << "\n";
    }
}