#include <iostream>
#include <string>

using namespace std;

int main() {
    int count=0;
    string str;
    string mobis = "MOBIS";
    
    cin >> str;
    
    for (int i=0;i<5;i++){
        for (int j=0;j<str.length();j++){
            if (mobis[i]==str[j]){
                count++;
                break;
            }
        }
    }

    cout << (count==5?"YES":"NO");
}