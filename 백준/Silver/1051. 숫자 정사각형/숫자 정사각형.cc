#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,M,max=0;
    cin >> N >> M;
    vector<vector<char>> arr(N,vector<char>(M));
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            for (int k=(N>M?M:N)-1;k>=0;k--){
                if (i+k>=N||j+k>=M){
                    continue;
                }
                if ((arr[i][j]==arr[i][j+k]&&arr[i][j+k]==arr[i+k][j+k])&&(arr[i+k][j+k]==arr[i+k][j]&&arr[i+k][j]==arr[i][j])){
                    max=max>(k+1)*(k+1)?max:(k+1)*(k+1);
                    break;
                }
            }
        }
    }
    cout << max;
}