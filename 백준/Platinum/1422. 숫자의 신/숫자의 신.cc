#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int custom(string x, string y);

int main() {
    int K,N,a,max=0;
    string str="";
    cin >> K >> N;
    vector<string> arr(N);
    for (int i=0;i<N;i++){
        if (i<K){
            cin >> a;
            arr[i]=to_string(a);
            max=max>a?max:a;
        }
        else {
            arr[i]=to_string(max);
        }
    }
    sort(arr.begin(),arr.end(),custom);
    for (int i=0;i<N;i++){
        str+=arr[i];
    }
    cout << str;
}

int custom(string x, string y){
    return x+y>y+x;
}