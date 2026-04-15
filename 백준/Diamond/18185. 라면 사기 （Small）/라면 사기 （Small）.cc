#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int N,a,sum=0,count;
    cin >> N;
    vector<int> arr(N+2,0);
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }

    for (int i=0;i<N;i++){
        // 3개검사
        if (arr[i]>0&&arr[i+1]>0&&arr[i+2]>0){
            if (arr[i+1]>arr[i+2]){
                count=min(arr[i],arr[i+1]-arr[i+2]);
                arr[i]-=count;
                arr[i+1]-=count;
                sum+=count*5;
            }
            count=min({arr[i],arr[i+1],arr[i+2]});
            arr[i]-=count;
            arr[i+1]-=count;
            arr[i+2]-=count;
            sum+=count*7;
        }
        // 2개검사
        else if (arr[i]>0&&arr[i+1]>0){
            count=min(arr[i],arr[i+1]);
            arr[i]-=count;
            arr[i+1]-=count;
            sum+=count*5;
        }
        count=arr[i];
        arr[i]=0;
        sum+=count*3;
    }
    cout << sum;
}