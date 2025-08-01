#include <iostream>

using namespace std;

int main() {
    int N,M,K;
    cin >> N >> M >> K;
    cout << ((M>K?K:M)+(N-M>N-K?N-K:N-M));
}