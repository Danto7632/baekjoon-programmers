#include <iostream>
#include <string>

using namespace std;

int main() {
    int l,r;
    cin >> l >> r;
    cout << (l+r==0?"Not a moose":l==r?"Even "+to_string(l*2):l>r?"Odd "+to_string(l*2):"Odd "+to_string(r*2));
}