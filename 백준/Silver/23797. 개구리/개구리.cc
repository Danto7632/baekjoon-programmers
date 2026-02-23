#include <iostream>

using namespace std;

int main() {
    int count=0,K=0,P=0,gap=0;
    string frog;
    cin >> frog;
    for (int i=0;i<frog.length();i++){
        if (frog[i]=='K'){
            K++;
            if (P>0){
                P--;
            }
            if (gap<K-P){
                gap=K-P;
                count++;
            }
        }
        else {
            P++;
            if (K>0){
                K--;
            }
            if (gap<P-K){
                gap=K-P>P-K?K-P:P-K;
                count++;
            }
        }
    }
    cout << count;
}