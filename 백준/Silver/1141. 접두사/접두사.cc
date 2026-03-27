#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int custom(string x, string y);

int main() {
    int n,count=0,flag;
    string str;
    vector<string> arr;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        arr.push_back(str);
    }
    sort(arr.begin(),arr.end(),custom);
    for (int i=0;i<n;i++){
        flag=0;
        for (int j=i+1;j<n;j++){
            for (int k=0;k<arr[i].length();k++){
                if (arr[i][k]!=arr[j][k]){
                    break;
                }
                if (k+1==arr[i].length()){
                    flag=1;
                }
            }
            if (flag==1){
                count++;
                break;
            }
        }
    }
    cout << n-count;
}

int custom(string x, string y){
    return x.size()<y.size();
}