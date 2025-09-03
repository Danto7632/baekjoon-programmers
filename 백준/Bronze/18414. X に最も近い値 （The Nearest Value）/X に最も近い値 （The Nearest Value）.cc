#include <iostream>

using namespace std;

int main() {
    int X,L,R;
    cin >> X >> L >> R;

    if (X>=L&&X<=R){
        cout << X;
    }
    else if (X>R){
        cout << R;
    }
    else {
        cout << L;
    }
}