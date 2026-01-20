#include <iostream>

using namespace std;

int main() {
    int H,W,N,M;
    cin >> H >> W >> N >> M;
    cout << ((H+N)/(N+1))*((W+M)/(M+1));
}