#include <iostream>

using namespace std;

int main() {
    int N,M,A,B;
    cin >> N >> M >> A >> B;
    cout << (M>=N*3?0:(N*3-M)*A+B);
}