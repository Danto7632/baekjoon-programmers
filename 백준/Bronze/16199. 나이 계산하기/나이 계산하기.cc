#include <iostream>

using namespace std;

int main() {
    int y1,m1,d1,y2,m2,d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if (y1==y2){
        cout << "0\n1\n0";
    }
    else if ((m1==m2&&d1>d2)||m1>m2){
        cout << y2-y1-1 << "\n" << y2-y1+1 << "\n" << y2-y1;
    }
    else if ((m1==m2&&d1<=d2)||m1<m2){ //그냥 else로 처리해도 무방
        cout << y2-y1 << "\n" << y2-y1+1 << "\n" << y2-y1;
    }
}