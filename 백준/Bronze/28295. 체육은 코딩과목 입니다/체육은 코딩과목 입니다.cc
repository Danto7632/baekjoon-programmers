#include <iostream>

using namespace std;

int main() {
    int n,sum=0;
    for (int i=0;i<10;i++){
        cin >> n;
        sum+=n;
    }
    cout << (sum%4==0?"N":sum%4==3?"W":sum%4==2?"S":"E");
}