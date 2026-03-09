#include <iostream>

using namespace std;

int main() {
    int N,T,P,max=0;
    int arr[16]={0,};
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> T >> P;
        if (i+T<=N){
            arr[i+T]=arr[i+T]>P+arr[i]?arr[i+T]:P+arr[i];
            max=max>arr[i+T]?max:arr[i+T];
        }
        arr[i+1]=arr[i]>arr[i+1]?arr[i]:arr[i+1];
    }
    cout << max;
}