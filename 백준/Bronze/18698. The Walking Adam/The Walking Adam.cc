#include <iostream>

using namespace std;

int main() {
    int n,count;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        count=0;
        cin >> str;
        for (int j=0;j<str.length();j++){
            if (str[j]=='D'){
                break;
            }
            count++;
        }
        cout << count << "\n";
    }
}