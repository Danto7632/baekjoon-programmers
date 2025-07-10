#include <iostream>
#include <string>

using namespace std;

int main() {
    int sum=0;
    string str;
    cin >> str;
    
    for (int i=0;i<str.length();i++){
        if (str[i]==48){
            sum+=(str[i-1]-48)*9;
        }
        sum+=str[i]-48;
    }
    cout << sum;
}