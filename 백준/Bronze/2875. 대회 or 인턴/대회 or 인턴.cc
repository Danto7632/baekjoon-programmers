#include <iostream>

using namespace std;

int main() {
    int N,M,K;
    cin >> N >> M >> K;
    if (N==M*2){
        cout << M-(K+2)/3;
    }
    else if (N>M*2){
        cout << M-(K+2-N+M*2>0?K+2-N+M*2:0)/3;
    }
    else {
        cout << N/2-(K+2-M+N/2-N%2>0?K+2-M+N/2-N%2:0)/3;
    }
}