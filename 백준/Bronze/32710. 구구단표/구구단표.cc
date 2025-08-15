#include <iostream>

using namespace std;

int main() {
    int n,check=0;
    cin >> n;
    if (n<10){
        check=1;
    }
    else {
        for (int i=1;i<10;i++){
            for (int j=1;j<10;j++){
                if (n==i*j){
                    check=1;
                }
            }
        }
    }
    cout << check;
}