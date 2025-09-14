#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cout << i+1 << " ";
        if (i+1==n||(i+1)%6==0){
            cout << "Go!" << " ";
        }
    }
}