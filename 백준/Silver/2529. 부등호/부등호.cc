#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k,count;
    cin >> k;
    vector<char> nega(k);
    vector<int> arr(k+1,-1);
    vector<int> arr2(k+1,-1);
    for (int i=0;i<k;i++){
        cin >> nega[i];
    }

    // 최대
    count=9;
    for (int i=0;i<k;i++){
        if (nega[i]=='>'){
           arr[i]=count--;
            for (int j=1;arr[i-j]==-1;j++){
                arr[i-j]=count--;
            }
        }
    }
    for (int i=k;count>=0&&count!=8-k;i--){
        arr[i]=count--;
    }
    //출력1
    for (int i=0;i<k+1;i++){
        cout << arr[i];
    }
    cout << "\n";
    
    
    // 최소
    count=0;
    for (int i=0;i<k;i++){
        if (nega[i]=='<'){
           arr2[i]=count++;
            for (int j=1;arr2[i-j]==-1;j++){
                arr2[i-j]=count++;
            }
        }
    }
    for (int i=k;count<=9&&count!=k+1;i--){
        arr2[i]=count++;
    }
    //출력2
    for (int i=0;i<k+1;i++){
        cout << arr2[i];
    }
}