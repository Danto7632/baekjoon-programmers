#include <iostream>

using namespace std;

int main() {
    int n,count=1;
    cin >> n;
    while (1){
        if ((n*count)%360==0){
            break;
        }
        count++;
    }
    cout << count;
}