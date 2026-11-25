#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A,B,C,x,y;
    int sum=0;
    int max=0;
    vector<int> arr(100,0);
    cin >> A >> B >> C;
    for (int i=0;i<3;i++){
        cin >> x >> y;
        max=max>y?max:y;
        for (int j=x;j<y;j++){
            arr[j]++;
        }
    }
    for (int i=0;i<max;i++){
        if (arr[i]==1){
            sum+=A;
        }
        else if (arr[i]==2){
            sum+=B*2;
        }
        else if (arr[i]==3){
            sum+=C*3;
        }
    }
    cout << sum;
}