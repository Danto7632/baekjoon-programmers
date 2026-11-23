#include <iostream>

using namespace std;

int main() {
    int max=0;
    int count=0;
    int a,b;
    for (int i=0;i<4;i++){
        cin >> a >> b;
        count+=b-a;
        max=max>count?max:count;
    }
    cout << max;
}