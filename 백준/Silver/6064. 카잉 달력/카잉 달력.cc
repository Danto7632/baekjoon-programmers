#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int T,M,N,x,y,count,lcmv;
    cin >> T;
    for (int i=0;i<T;i++){
        count=-1;
        cin >> M >> N >> x >> y;
        lcmv=lcm(M,N);
        for (int j=x;j<=lcmv;j+=M){
            if ((j-y)%N==0){
                count=j;
                break;
            }
        }
        cout << count << "\n";
    }
}