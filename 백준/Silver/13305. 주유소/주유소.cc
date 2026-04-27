#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int N,a,min=1000000001,sum=0;
    cin >> N;
    vector<int> arr(N,0);
    for (int i=0;i<N-1;i++){
        cin >> arr[i];
    }
    for (int i=0;i<N;i++){
        cin >> a;
        if (a<min){
            min=a;
        }
        sum+=arr[i]*min;
    }
    cout << sum;
}