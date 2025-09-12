#include <iostream>

using namespace std;

int main() {
    int check,m,n=0;
    string str;
    cin >> str; 
    for (int i=0;i<12;i++){
        if (i%2==0){
            if (str[i]=='*'){
                check=1;
                continue;
            }
            n+=str[i]-'0';
        }
        else {
            if (str[i]=='*'){
                check=3;
                continue;
            }
            n+=(str[i]-'0')*3;
        }
    }
    m=str[12]-'0';

    for (int i=0;i<10;i++){
        if (m==(10-(n+i*check)%10==10?0:10-(n+i*check)%10)){
            cout << i;
            break;
        }
    }
}