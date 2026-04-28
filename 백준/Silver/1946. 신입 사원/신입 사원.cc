#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T,N,count,min;
    cin >> T;
    for (int i=0;i<T;i++){
        count=0;
        min=100001;
        cin >> N;
        vector<vector<int>> arr(N,vector<int>(2,0));
        for (int j=0;j<N;j++){
            cin >> arr[j][0] >> arr[j][1];
        }
        sort(arr.begin(),arr.end());
        for (int j=0;j<N;j++){
            if (min>arr[j][1]){
                min=min<arr[j][1]?min:arr[j][1];
                count++;
            }
        }
        cout << count << "\n";
    }
}