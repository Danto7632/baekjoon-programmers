#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int custom(string x, string y);

int main() {
    int N,max=0;
    string str;
    string maxs;
    cin >> N;
    vector<string> arr(N+1);
    for (int i=0;i<N;i++){
        cin >> arr[i];
        for (int j=0;j<arr[i].length();j++){
            if (arr[i][j]=='6'){
                arr[i][j]='9';
            }
            else if (arr[i][j]=='9'){
                arr[i][j]='6';
            }
        }
        reverse(arr[i].begin(), arr[i].end());
        if (maxs.length()<arr[i].length() || maxs.length()==arr[i].length()&&max<stoi(arr[i])){
            max=stoi(arr[i]);
            maxs=arr[i];
        }
        reverse(arr[i].begin(), arr[i].end());
    }
    reverse(maxs.begin(),maxs.end());
    arr[N]=maxs;
    
    sort(arr.begin(),arr.end(),custom);
    for (int i=0;i<=N;i++){
        str+=arr[i];
    }
    for (int i=0;i<str.length();i++){
        if (str[i]=='6'){
            str[i]='9';
        }
        else if (str[i]=='9'){
            str[i]='6';
        }
    }
    cout << str;
}

int custom(string x, string y){
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    return x+y<y+x;
}