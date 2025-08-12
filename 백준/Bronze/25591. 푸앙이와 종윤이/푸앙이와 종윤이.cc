#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    cout << (100-a) << " " << (100-b) << " " << (a+b-100) << " " << ((100-a)*(100-b)) << " " << ((100-a)*(100-b)/100) << " " << ((100-a)*(100-b)%100) << "\n" << (a*b/100) << " " << (a*b%100);
}