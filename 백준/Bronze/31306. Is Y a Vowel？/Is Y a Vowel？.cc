#include <iostream>

using namespace std;

int main() {
    int count1=0,count2=0;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count1++;
            count2++;
        }
        if (str[i]=='y'){
            count2++;
        }
    }
    cout << count1 << " " << count2;
}