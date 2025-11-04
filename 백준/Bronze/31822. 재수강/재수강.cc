#include <iostream>

using namespace std;

int main() {
    string str1,str2;
    int n,count=0,check;
    cin >> str1;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str2;
        check=0;
        for (int j=0;j<5;j++){
            if (str1[j]==str2[j]){
                check++;
            }
        }
        if (check==5){
            count++;
        }
    }
    cout << count;
}