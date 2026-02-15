#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    cin >> n;
    while (1){
        if (n%10==0){
            n/=10;
        }
        else {
            break;
        }
    }
    while (1){
        if (n==0){
            break;
        }
        else if (n%10==0){
            count++;
            n/=10;
        }
        else {
            n/=10;
        }
    }
    cout << count;
}