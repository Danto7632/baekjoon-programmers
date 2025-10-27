#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int a, int b, int c);

int main() {
    int n;
    cin >> n;
    cout << (int)pow(2,n)-1 << "\n";
    hanoi(n,1,3,2);
}

void hanoi(int n, int a, int c, int b){
    if (n==1){
        cout << a << " " << c << "\n";
    }
    else {
        hanoi(n-1,a,b,c);
        hanoi(1,a,c,b);
        hanoi(n-1,b,c,a);
    }
}