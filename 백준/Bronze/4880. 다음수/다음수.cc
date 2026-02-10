#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    while (1){
        cin >> a >> b >> c;
        if (a==0&&b==0&&c==0){
            break;
        }
        else if (c-b==b-a&&a!=b){
            cout << "AP " << b-a+c << "\n";
        }
        else {
            cout << "GP " << b/a*c << "\n";
        }
    }
}