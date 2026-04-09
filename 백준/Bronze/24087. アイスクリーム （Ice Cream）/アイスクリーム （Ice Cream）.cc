#include <iostream>

using namespace std;

int main() {
    int S,A,B;
    cin >> S >> A >> B;
    if (S<=A){
        cout << 250;
    }
    else {
        cout << 250+((S-A)/B+((S-A)%B==0?0:1))*100;
    }
}