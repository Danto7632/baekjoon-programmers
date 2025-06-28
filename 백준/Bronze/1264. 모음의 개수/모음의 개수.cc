#include <iostream>
#include <string>

using namespace std;

int main() {
    int count;
    string str;
    while (1){
        count=0;
        getline(cin,str);
        if (str=="#"){
            break;
        }
        for (int i=0;i<str.length();i++){
            if (str[i]=='a'||str[i]=='A'){
                count++;
            }
            else if (str[i]=='e'||str[i]=='E'){
                count++;
            }
            else if (str[i]=='i'||str[i]=='I'){
                count++;
            }
            else if (str[i]=='o'||str[i]=='O'){
                count++;
            }
            else if (str[i]=='u'||str[i]=='U'){
                count++;
            }
        }
        cout << count << "\n";
    }
}