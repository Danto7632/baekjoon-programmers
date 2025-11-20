#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,M,count=0;
    cin >> N >> M;
    vector<vector<char>> arr(N,vector<char>(M,0));
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<N-1;i++){
        for (int j=0;j<M-1;j++){
            if (arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]-192==4){
                count++;
            }
        }
    }
    cout << (count>0?1:0);
}