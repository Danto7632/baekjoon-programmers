#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int a,b,c,d;
    string str,str2;
    cin >> a >> b >> c >> d;
    str=to_string(a)+to_string(b);
    str2=to_string(c)+to_string(d);
    cout << stol(str)+stol(str2);
}