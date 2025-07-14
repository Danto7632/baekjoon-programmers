#include <iostream>

using namespace std;

int main() {
    int n,a,b,can,flag=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        if (b>=a&&flag==0){
            can=b;
            flag=1;
        }
        else if (can!=-1&&b>=a&&can>b){
            can=b;
        }
        else if (flag==0){
            can=-1;
            continue;
        }
    }
    cout << can;
}