#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,K,flag,ck,cv,count=0;
    cin >> N >> K;
    vector<int> plug(N,0);
    vector<int> arr(K,0);
    for (int i=0;i<K;i++){
        cin >> arr[i];
    }
    for (int i=0;i<K;i++){
        flag=1;
        for (int j=0;j<N;j++){
            if (plug[j]==0){
                plug[j]=arr[i];
                flag=0;
                break;
            }
            else if (plug[j]==arr[i]){
                flag=0;
                break;
            }
        }
        if (flag){
            ck=0;
            for (int k=0;k<N;k++){
                for (int j=i+1;j<=K;j++){
                    if (j==K){
                        cv=k;
                        flag=0;
                        break;
                    }
                    else if (arr[j]==plug[k]){
                        if (ck<j){
                            ck=j;
                            cv=k;
                        }
                        break;
                    }
                }
                if (flag==0){
                    plug[cv]=arr[i];
                    count++;
                    break;
                }
            }
            if (flag){
                plug[cv]=arr[i];
                count++;
            }
        }
    }
    cout << count;
}