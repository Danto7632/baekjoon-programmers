#include <iostream>

using namespace std;

int main() {
    int N,M,check,arr[10000],count=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    for (int i=0;i<N;i++){
        check=0;
        for (int j=i;j<N;j++){
            check+=arr[j];
            if (check==M){
                count++;
                break;
            }
        }
    }
    cout << count;
}