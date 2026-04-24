#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    long long int N,one,two,three;
    vector<int> arr(6);
    cin >> N;
    for (int i=0;i<6;i++){
        cin >> arr[i];
    }
    one=min({arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]});
    two=min({arr[0]+arr[1],arr[0]+arr[2],arr[0]+arr[3],arr[0]+arr[4],arr[5]+arr[1],arr[5]+arr[2],arr[5]+arr[3],arr[5]+arr[4],arr[1]+arr[2],arr[3]+arr[4],arr[1]+arr[3],arr[2]+arr[4]});
    three=min({arr[0]+arr[1]+arr[2],arr[0]+arr[1]+arr[3],arr[0]+arr[3]+arr[4],arr[0]+arr[2]+arr[4],arr[5]+arr[1]+arr[2],arr[5]+arr[1]+arr[3],arr[5]+arr[3]+arr[4],arr[5]+arr[2]+arr[4]});
    if (N==1){
        cout << arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]-max({arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]});
    }
    else {
        cout << (N-2)*(5*N-6)*one+(8*N-12)*two+4*three;
    }
}