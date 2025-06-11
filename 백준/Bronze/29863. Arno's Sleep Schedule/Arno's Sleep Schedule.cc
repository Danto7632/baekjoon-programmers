#include <iostream>

using namespace std;

int main() {
    int sleep, awake;
    cin >> sleep >> awake;
    cout << (awake-sleep>0?awake-sleep:awake-sleep+24);
}