#include <iostream>

using namespace std;

int main() {
    int count=0;
    string str;
    while(cin >> str){
        for (int i=0;i<str.length();i++){
            if (str[i]=='A'||str[i]=='a'||str[i]=='b'||str[i]=='D'||str[i]=='d'||str[i]=='e'||str[i]=='g'||str[i]=='O'||str[i]=='o'||str[i]=='P'||str[i]=='p'||str[i]=='Q'||str[i]=='q'||str[i]=='R'||str[i]=='@'){
                count++;
            }
            else if (str[i]=='B'){
                count+=2;
            }
        }
    }
    cout << count;
}