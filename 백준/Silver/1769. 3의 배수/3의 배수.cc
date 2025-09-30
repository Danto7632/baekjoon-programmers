#include <iostream>

using namespace std;

int main() {
    int X=0,Y,count=0;
    char a;
    
    while (cin >> a){
        X+=a-48;
        count++;
    }
    
    if (count>1){
        count=1;
    }
    else {
        count=0;
    }
    
    while(X/10!=0){
        Y=0;
        while (X!=0){
            Y+=X%10;
            X/=10;
        }
        X=Y;
        count++;
    }
    cout << count << "\n" << (X%3==0?"YES":"NO");
}