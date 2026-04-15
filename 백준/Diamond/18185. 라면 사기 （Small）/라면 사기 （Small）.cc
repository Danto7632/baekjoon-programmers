#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,a,sum=0;
    cin >> N;
    vector<int> arr(N);
    vector<int> stack(N,0);
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for (int i=0;i<N;i++){
        if (i%2==0){
            a=i/2;
        }
        else {
            a=N-i/2-1;
        }
        // 3개검사
        if (a+2<N&&arr[a]>stack[a]&&arr[a+1]>stack[a+1]&&arr[a+2]>stack[a+2]&&arr[a+1]-stack[a+1]<=arr[a+2]-stack[a+2]){
            stack[a]++;
            stack[a+1]++;
            stack[a+2]++;
            sum+=7;
            i--;
            continue;
        }
        else if (a-1>0&&arr[a-2]>stack[a-2]&&arr[a-1]>stack[a-1]&&arr[a]>stack[a]&&arr[a-2]-stack[a-2]>=arr[a-1]-stack[a-1]){
            stack[a-2]++;
            stack[a-1]++;
            stack[a]++;
            sum+=7;
            i--;
            continue;
        } 
        // 2개검사
        else if (a+1<N&&arr[a]>stack[a]&&arr[a+1]>stack[a+1]){
            stack[a]++;
            stack[a+1]++;
            sum+=5;
            i--;
            continue;
        }
        else if (a>0&&arr[a-1]>stack[a-1]&&arr[a]>stack[a]){
            stack[a-1]++;
            stack[a]++;
            sum+=5;
            i--;
            continue;
        }
        // 1개검사
        else if (arr[a]>stack[a]){
            stack[a]++;
            sum+=3;
            i--;
            continue;
        }
    }
    cout << sum;
}