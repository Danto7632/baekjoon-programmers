#include <iostream>

using namespace std;

int main() {
    int a,b,count=0;
    cin >> a >> b;
    while (1){
        if (a>=2&&b>=1){
            a-=2;
            b-=1;
            count++;
        }
        else {
            break;
        }
    }
    cout << count;
}