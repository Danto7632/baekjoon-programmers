#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0;i<N*2;i++){
        for (int j=i;j<N*2-1;j++){
            cout << " ";
        }
        cout << "*";
        if (i<N){
            for (int j=0;j<N;j++){
                cout << " ";
            }
        }
        else {
            for (int j=0;j<2*i+1-N;j++){
                cout << " ";
            }
        }
        cout << "*";
        if (i<N){
            for (int j=0;j<i*2+1;j++){
                cout << " ";
            }
        }
        else {
            for (int j=0;j<N*4-i*2-1;j++){
                cout << " ";
            }
        }
        cout << "*";
        if (i<N){
            for (int j=0;j<N-i-1;j++){
                cout << " ";
            }
        }
        else {
            for (int j=0;j<i-N;j++){
                cout << " ";
            }
        }
        cout << "\n";
    }
}