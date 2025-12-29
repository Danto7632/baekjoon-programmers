#include <iostream>

using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b){
        if (a+b==0) break;
        if (a+b==13){
            cout << "Never speak again.\n";
            continue;
        }
        if (a>b){
            cout << "To the convention.\n";
            continue;
        }
        if (a<b){
            cout << "Left beehind.\n";
            continue;
        }
        if (a==b){
            cout << "Undecided.\n";
            continue;
        }
    }
}