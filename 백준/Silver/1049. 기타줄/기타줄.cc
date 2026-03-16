#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N,M,a,b,x=1001,y=1001;
    cin >> N >> M;
    for (int i=0;i<M;i++){
        cin >> a >> b;
        x=a>x?x:a;
        y=b>y?y:b;
    }
    cout << ((N<6?min(N*y,x):min((N/6+1)*x,N/6*x+N%6*y))>N*y?N*y:(N<6?min(N*y,x):min((N/6+1)*x,N/6*x+N%6*y)));
}