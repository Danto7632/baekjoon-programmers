#include <iostream>

using namespace std;

int main() {
    int N,m,M,T,R,now;
    int time=0;
    cin >> N >> m >> M >> T >> R;
    now=m;
    if (m+T>M){
        time=-1;
        N=0;
    }
    while (N!=0){
        if (now+T<=M){
            now+=T;
            N--;
        }
        else{
            now=now-R<m?m:now-R;
        }
        time++;
    }
    cout << time;
}