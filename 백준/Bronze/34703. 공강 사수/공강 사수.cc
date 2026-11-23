#include <iostream>

using namespace std;

int main() {
    int n,a,arr[5]={0,};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        arr[a-1]=1;
    }
    cout << (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]==5?"NO":"YES");
    
}