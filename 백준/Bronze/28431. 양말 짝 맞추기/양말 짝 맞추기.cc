#include <iostream>

using namespace std;

int main() {
    int a,arr[3]={10,10,10};
    for (int i=0;i<5;i++){
        cin >> a;
        for (int j=0;j<3;j++){
            if (arr[j]==10){
                arr[j]=a;
                break;
            }
            else if (arr[j]==a){
                arr[j]=-1;
                break;
            }
        }
    }
    cout << arr[0]+arr[1]+arr[2]+2;
}