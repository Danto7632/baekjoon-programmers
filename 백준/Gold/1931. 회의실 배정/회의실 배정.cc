#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,b,count=1;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(2,0));
    for (int i=0;i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    sort(arr.begin(),arr.end());
    b=arr[0][1];
    for (int i=1;i<n;i++){
        if (b<=arr[i][0]){
            b=arr[i][1];
            count++;
        }
        else {
            b=arr[i][1]>b?b:arr[i][1];
        }
    }
    cout << count;
}