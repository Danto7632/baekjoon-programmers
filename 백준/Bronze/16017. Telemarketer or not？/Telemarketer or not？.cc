#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,count=0;
    cin >> a >> b >> c >> d;

    if (a==8||a==9){
        count++;
    }
    if (b==c){
        count++;
    }
    if(d==8||d==9){
        count++;
    }

    cout << (count==3?"ignore":"answer");
}