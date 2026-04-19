#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,M,count,ms,check,answer=0;
    cin >> N;
    vector<int> c(N);
    for (int i=0;i<N;i++){
        cin >> c[i];
    }
    cin >> M;
    vector<vector<int>> b(M,vector<int>(2,0));
    for (int i=0;i<M;i++){
        cin >> b[i][0];
    }
    sort(c.begin(),c.end());
    sort(b.begin(),b.end());

    // 박스마다 들 수 있는 크레인의 갯수 탐지
    for (int i=0;i<M;i++){
        count=0;
        for (int j=0;j<N;j++){
            if (b[i][0]<=c[j]){
                count++;
            }
        }
        b[i][1]=count;
    }

    // 예외처리
    if (b[M-1][0]>c[N-1]){
        answer--;
    }
    else {
        count=0;
        ms=M-1;
        check=M;
        while(1){
            if (check==0){
                break;
            }
            else if (ms==-1){
                count=0;
                ms=M-1;
            }
            else if (b[ms][1]-count>0){
                if (count==0){
                    answer++;
                }
                b[ms][1]=0;
                count++;
                ms--;
                check--;
            }
            else {
                ms--;
            }
        }
    }
    cout << answer;
}