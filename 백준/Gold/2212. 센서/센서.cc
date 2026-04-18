#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,K,max;
    cin >> N >> K;
    vector<int> arr(N);
    vector<int> diff;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    // 중복제거
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    max=arr.back()-arr.front();

    // 예외처리
    if (K>=arr.size()){
        max=0;
    }
    else {
        for (int i=1;i<arr.size();i++){
            diff.push_back(arr[i]-arr[i-1]);
        }
        sort(diff.rbegin(),diff.rend());
    
        // 좌표당 차이가 큰값부터 차례대로 제거(시뮬레이션 없이 순수 정답만 구하는 코드구조)
        for (int i=0;i<K-1;i++){
            max-=diff[i];
        }
    }
    cout << max;
}