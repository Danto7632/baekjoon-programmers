#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,count=1;
    string str;
    vector<string> arr;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> str;
        for (int j=0;j<str.length();j++){
            if (str[j]=='.'){
                str.erase(0,j+1);
                break;
            }
        }
        arr.push_back(str);
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N-1;i++){
        if (arr[i]==arr[i+1]){
            count++;
        }
        else {
            cout << arr[i] << " " << count << "\n";
            count=1;
        }

        if (i==N-2){
            cout << arr[i+1] << " " << count << "\n";
        }
    }
}