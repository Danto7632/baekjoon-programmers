#include <iostream>

using namespace std;

int main() {
    int X,Y,xsum=1,ysum=1;
    cin >> X >> Y;
    for (int i=1;i<X;i++){
        xsum=xsum*10+1;
    }
    for (int i=1;i<Y;i++){
        ysum=ysum*10+1;
    }
    cout << xsum+ysum;
}