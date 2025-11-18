#include <iostream>

using namespace std;

int main() {
    int a,b,count=0;
    cin >> a >> b;
    while (a!=b){
        if (a>b||(b%2==1&&b%10!=1)){
            count=-2;
            break;
        }
        else {
            if (b%10==1){
                b/=10;
            }
            else {
                b/=2;
            }
            count++;
        }
    }
    cout << count+1;
}