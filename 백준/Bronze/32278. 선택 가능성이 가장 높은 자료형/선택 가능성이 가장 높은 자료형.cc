#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (-32768<=n&&n<=32767){
        cout << "short";
    }
    else if (-2147483648<=n&&n<=2147483647){
        cout << "int";
    }
    else {
        cout << "long long";
    }
}