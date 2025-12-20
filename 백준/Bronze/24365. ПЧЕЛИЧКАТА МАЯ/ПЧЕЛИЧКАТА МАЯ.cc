#include <iostream>

using namespace std;

int main() {
    int a,b,c,avg;
    cin >> a >> b >> c;
    avg=(a+b+c)/3;
    cout << (avg>=b?avg*3-a*2-b:avg*3-a*2-b);
}