#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int N,a,check,sum=0;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> arr;
    for (int i=0;i<N;i++){
        cin >> a;
        arr.push(a);
    }
    for (int i=1;i<N;i++){
        check=arr.top();
        arr.pop();
        check+=arr.top();
        arr.pop();
        arr.push(check);
        sum+=check;
    }
    cout << sum;
}