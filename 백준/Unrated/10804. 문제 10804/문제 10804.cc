#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    vector<int> arr(20,0);
    for (int i=0;i<20;i++){
        arr[i]=i+1;
    }
    for (int i=0;i<10;i++){
        cin >> a >> b;
        reverse(arr.begin()+a-1,arr.begin()+b);
    }
    for (int i=0;i<20;i++){
        cout << arr[i] << " ";
    }
}