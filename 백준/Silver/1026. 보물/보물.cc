#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,sum=0;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    for (int i=0;i<N;i++){
        cin >> B[i];
    }
    sort(B.rbegin(),B.rend());
    for (int i=0;i<N;i++){
        sum+=A[i]*B[i];
    }
    cout << sum;
}