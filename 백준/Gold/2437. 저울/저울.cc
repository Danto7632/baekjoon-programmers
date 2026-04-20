#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    vector<vector<int>> range(2,vector<int>(2,0));
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        range[1][0]=range[0][0]+arr[i];
        range[1][1]=range[0][1]+arr[i];
        if (range[0][1]==0&&range[1][0]==1){
            range[0][1]=range[1][1];
        }
        else if (range[0][1]+1>=range[1][0]){
            range[0][1]=range[1][1];
        }
        else {
            break;
        }
    }
    cout << range[0][1]+1;
}