#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int N,B,C,sum=0,flag=0,count;
    cin >> N >> B >> C;
    vector<int> arr(N+2,0);
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }

    // 우선순위 결정
    if (B<=C){
        flag=1;
    }
    
    for (int i=0;i<N;i++){
        if (flag){
            sum+=arr[i]*B;
        }
        else {
            // 3개검사
            if (arr[i]>0&&arr[i+1]>0&&arr[i+2]>0){
                if (arr[i+1]>arr[i+2]){
                    count=min(arr[i],arr[i+1]-arr[i+2]);
                    arr[i]-=count;
                    arr[i+1]-=count;
                    sum+=count*(B+C);
                }
                count=min({arr[i],arr[i+1],arr[i+2]});
                arr[i]-=count;
                arr[i+1]-=count;
                arr[i+2]-=count;
                sum+=count*(B+2*C);
            }
            // 2개검사
            else if (arr[i]>0&&arr[i+1]>0){
                count=min(arr[i],arr[i+1]);
                arr[i]-=count;
                arr[i+1]-=count;
                sum+=count*(B+C);
            }
            count=arr[i];
            arr[i]=0;
            sum+=count*B;
        }
    }
    cout << sum;
}