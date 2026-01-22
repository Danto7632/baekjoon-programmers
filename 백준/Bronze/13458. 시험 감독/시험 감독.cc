#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,A,B,C;
    long long int sum=0;
    vector<int> arr;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A;
        arr.push_back(A);
    }
    cin >> B >> C;
    for (int i=0;i<N;i++){
        
        sum+=arr[i]<=B?1:(arr[i]-B+C-1)/C+1;
    }
    cout << sum;
}