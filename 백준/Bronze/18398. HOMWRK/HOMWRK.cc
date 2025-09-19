#include <iostream>

using namespace std;

int main() {
    int T,N,A,B;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> N;
        for (int j=0;j<N;j++){
            cin >> A >> B;
            cout << A+B << " " << A*B << "\n";
        }
    }
}