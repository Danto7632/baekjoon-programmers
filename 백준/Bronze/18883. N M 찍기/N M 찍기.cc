#include <iostream>

using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=1;j<M+1;j++){
            cout << i*M+j;
            if (j!=M){
                cout << " ";
            }
        }
        cout << "\n";
    }
}