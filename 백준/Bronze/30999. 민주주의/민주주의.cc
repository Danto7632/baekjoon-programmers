#include <iostream>

using namespace std;

int main() {
    int N,M,agree=0,count=0;
    string str;

    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> str;
        agree=0;
        for (int j=0;j<str.length();j++){
            agree=str[j]=='O'?agree+1:agree;
        }
        count=agree>M/2?count+1:count;
    }
    cout << count;
}