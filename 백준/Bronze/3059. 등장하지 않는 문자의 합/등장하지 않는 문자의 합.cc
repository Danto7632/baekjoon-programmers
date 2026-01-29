#include <iostream>

using namespace std;

int main() {
    int n,arr[100]={0,},sum;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        sum=2015;
        for (int j=65;j<91;j++){
            arr[j]=0;
        }
        for (int j=0;j<str.length();j++){
            arr[str[j]]=1;
        }
        for (int j=65;j<91;j++){
            if (arr[j]==1){
                sum-=j;
            }
        }
        cout << sum << "\n";
    }
}