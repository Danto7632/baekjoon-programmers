#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,M,max=0;
    vector<vector<int>> arr(500,vector<int>(500));
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (M-j>3){
                max=max>arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]?max:arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3];
            }
            if (N-i>3){
                max=max>arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j]?max:arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j];
            }
            if (N-i>1&&M-j>1){
                max=max>arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]?max:arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            }
            if (N-i>1&&M-j>2){
                max=max>arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]?max:arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
                max=max>arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j]?max:arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j];
                max=max>arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]?max:arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
                max=max>arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2]?max:arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2];
                max=max>arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+1]?max:arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+1];
                max=max>arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]?max:arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
                max=max>arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2]?max:arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2];
                max=max>arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2]?max:arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2];
            }
            if (N-i>2&&M-j>1){
                max=max>arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]?max:arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
                max=max>arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j]?max:arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j];
                max=max>arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+2][j]?max:arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+2][j];
                max=max>arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1]?max:arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
                max=max>arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j]?max:arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j];
                max=max>arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+1][j+1]?max:arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+1][j+1];
                max=max>arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1]?max:arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1];
                max=max>arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j]?max:arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j];
            }
        }
    }
    cout << max;
}
