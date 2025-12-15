#include <iostream>

using namespace std;

int main() {
    int n,a,index,min=100000;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (min>a){
            min=a;
            index=i;
        }
    }
    cout << index;
}