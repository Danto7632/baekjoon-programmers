#include <iostream>

using namespace std;

int main() {
    int n,flag=0;
    cin >> n;
    if (n==1||n==2){
        flag=1;
    }
    else {
        while (1){
            if (n==1){
                flag=1;
                break;
            }
            else if (n%2==0){
                n/=2;
            }
            else {
                break;
            }
        }
    }
    
    cout << flag;
}