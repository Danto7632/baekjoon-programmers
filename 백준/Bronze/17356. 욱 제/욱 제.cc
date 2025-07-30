#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a,b,m;
    cin >> a >> b;
    cout << 1/(1+pow(10,(b-a)/400));
}