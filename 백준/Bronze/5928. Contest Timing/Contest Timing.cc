#include <iostream>

using namespace std;

int main() {
    int D,H,M;
    cin >> D >> H >> M;
    cout << (D*1440+H*60+M>=16511?D*1440+H*60+M-16511:-1);
}