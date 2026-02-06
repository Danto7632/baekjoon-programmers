#include <iostream>

using namespace std;

int main() {
    int n,a=0,b=0;
    char c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> c;
        c=='A'?a++:b++;
    }
    cout << (a==b?"Tie":a>b?"A":"B");
}