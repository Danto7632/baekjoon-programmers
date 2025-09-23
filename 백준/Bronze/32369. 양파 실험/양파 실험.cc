#include <iostream>

using namespace std;

int main() {
    int N,A,B,y1=1,y2=1,tmp;
    cin >> N >> A >> B;
    for (int i=0;i<N;i++){
        y1+=A;
        y2+=B;
        if (y1<y2){
            tmp=y1;
            y1=y2;
            y2=tmp;
        }
        else if (y1==y2){
            y2--;
        }
    }
    cout << y1 << " " << y2;
}