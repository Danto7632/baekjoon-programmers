#include <iostream>

using namespace std;

int main() {
    int N,M,K;
    cin >> N >> M >> K;
    cout << (N%(K-M)==0?N/(K-M):N/(K-M)+1);
}