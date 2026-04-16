#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,count,max=0;
    cin >> N;
    vector<int> A(N+1,0);
    vector<int> D(N+1,0);
    for (int i=1;i<=N;i++){
        cin >> A[i];
        count=0;
        for (int j=0;j<i;j++){
            if (A[i]>A[j]){
                count=count>D[j]?count:D[j];
            }
        }
        D[i]=count+1;
        max=max>count?max:count;
    }
    cout << max+1;
}