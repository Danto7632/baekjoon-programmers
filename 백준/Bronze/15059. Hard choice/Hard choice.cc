#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (d-a>0?d-a:0)+(e-b>0?e-b:0)+(f-c>0?f-c:0);
}