#include <iostream>

using namespace std;

int main(){
    int n,count=0;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        if (str[0]=='C'){
            count++;
        }
    }
    cout << count;
}