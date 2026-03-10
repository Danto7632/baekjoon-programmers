#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N,K,W,V;
    cin >> N >> K;
    vector<vector<int>> max(N,vector<int>(K+1,0));
    for (int i=0;i<N;i++){
        cin >> W >> V;
        if (i==0){
            for (int j=1;j<K+1;j++){
                if (j>=W){
                    max[i][j]=V;
                }
            }
        }
        else {
            for (int j=1;j<K+1;j++){
                if (j>=W){
                    max[i][j]=max[i-1][j]>V+max[i-1][j-W]?max[i-1][j]:V+max[i-1][j-W];
                }
                else {
                    max[i][j]=max[i-1][j];
                }
            }
        }
    }
    cout << max[N-1][K];
}