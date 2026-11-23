#include <iostream>
#include <vector>

using namespace std;

int main() {
    char c;
    int count=0;
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            cin >> c;
            if (c=='F'&&(i+j)%2==0){
                count++;
            }
        }
    }
    cout << count;
}