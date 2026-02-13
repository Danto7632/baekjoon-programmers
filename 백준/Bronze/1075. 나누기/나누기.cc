#include <iostream>

using namespace std;

int main() {
    int N,F;
    cin >> N >> F;
    for (int i=0;i<100;i++){
        if ((N/100*100+i)%F==0){
            if (i<10){
                cout << "0" << i;
            }
            else {
                cout << i;
            }
            break;
        }
    }
}