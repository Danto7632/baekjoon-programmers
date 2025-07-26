#include <iostream>

using namespace std;

int main() {
    int p[4],x,y,r,answer=0;
    cin >> p[0] >> p[1] >> p[2] >> p[3];
    cin >> x >> y >> r;
    for (int i=0;i<4;i++){
        if (p[i]==x){
            answer=i+1;
        }
    }
    cout << answer;
}