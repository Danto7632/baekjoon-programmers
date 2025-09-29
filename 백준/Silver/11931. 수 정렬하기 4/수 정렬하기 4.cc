#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a;
    vector<int> arr;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),greater<>());
    for (int i=0;i<n;i++){
        cout << arr[i] << "\n";
    }
}