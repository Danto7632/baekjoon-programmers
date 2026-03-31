#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    long long int t,n,num,sum;
    string str;
    vector<int> arr;
    cin >> t;
    for (int i=0;i<t;i++){
        sum=0;
        cin >> n;
        for (int j=0;j<n;j++){
            cin >> num;
            arr.push_back(num);
        }
        for (int k=0;k<arr.size()-1;k++){
            for (int l=k+1;l<arr.size();l++){
                sum+=gcd(arr[k],arr[l]);
            }
        }
        while (!arr.empty()){
            arr.pop_back();
        }
        cout << sum << "\n";
    }
}