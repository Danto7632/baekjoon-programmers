#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    string str1,str2;
    cin >> str1 >> n;
    for (int i=0;i<n;i++){
        cin >> str2;
        if (str1==str2){
            count++;
        }
    }
    cout << count;
}