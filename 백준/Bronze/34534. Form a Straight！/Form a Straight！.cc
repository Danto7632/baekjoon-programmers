#include <iostream>

using namespace std;

int main() {
    int n,arr[10],count,max=0;
    for (int i=0;i<5;i++){
        cin >> n;
        arr[n]=n;
    }
    for (int i=1;i<7;i++){
        count=0;
        for (int j=0;j<5;j++){
            if (arr[i+j]==i+j){
                count++;
            }
            max=count>max?count:max;
        }
    }
    cout << 5-max;
}