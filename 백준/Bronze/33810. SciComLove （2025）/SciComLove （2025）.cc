#include <iostream>

using namespace std;

int main() {
    int count=0;
    string str1="SciComLove";
    string str2;
    cin >> str2;
    for (int i=0;i<10;i++){
        if (str1[i]!=str2[i]){
            count++;
        }
    }
    cout << count;
}