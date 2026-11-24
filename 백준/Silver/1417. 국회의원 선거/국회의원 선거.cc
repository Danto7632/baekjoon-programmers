#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int count=0;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(2,0));
    for (int i=0;i<n;i++){
        arr[i][1]=i;
        cin >> arr[i][0];
    }
    sort(arr.rbegin(),arr.rend());
    while (arr[0][1]!=0){
        count++;
        arr[0][0]--;
        for (int i=0;i<n;i++){
            if (arr[i][1]==0){
                arr[i][0]++;
            }
        }
        sort(arr.rbegin(),arr.rend());
    }
    cout << count;
}