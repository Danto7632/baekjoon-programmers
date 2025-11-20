#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int P,M,C,X,min=-1;
    cin >> P >> M >> C >> X;
    for (int i=1;i<=P;i++){
        for (int j=1;j<=M;j++){
            for (int k=1;k<=C;k++){
                min=(min<0||min>abs((i+j)*(j+k)-X)?abs((i+j)*(j+k)-X):min);
            }
        }
    }
    cout << min;
}