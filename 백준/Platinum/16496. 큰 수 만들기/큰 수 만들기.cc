#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int custom(string x, string y);

int main() {
    int N,a,flag=0;
    cin >> N;
    string str;
    vector<string> arr(N,"");
    for (int i=0;i<N;i++){
        cin >> a;
        flag+=(a==0?0:1);
        arr[i]=to_string(a);
    }
    sort(arr.begin(),arr.end(),custom);
    for (int i=0;i<N;i++){
        str+=arr[i];
    }
    cout << (flag==0?"0":str);
}

int custom(string x, string y){
    return x+y>y+x;
}