#include <iostream>

using namespace std;

int main() {
    int N,ga,se,money=0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> ga >> se;
        if (ga==154){
            money+=50000;
        }
        else if (ga==148){
            money+=10000;
        }
        else if (ga==142){
            money+=5000;
        }
        else {
            money+=1000;
        }
    }
    cout << money;
}