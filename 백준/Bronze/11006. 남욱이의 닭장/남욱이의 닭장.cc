#include <iostream>

using namespace std;

int main() {
    int T,N,M;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> N >> M;
        cout << M*2-N << " " << N-M << "\n";
    }
}