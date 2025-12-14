#include <iostream>

using namespace std;

int main() {
    int n,a,arr[10]={0,};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        arr[a]++;
    }
    for (int i=0;i<10;i++){
        if (arr[i]!=0){
            cout << i << "\n";
        }
    }
}