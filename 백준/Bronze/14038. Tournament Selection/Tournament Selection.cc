#include <iostream>

using namespace std;

int main() {
    int count=0;
    char result;
    for (int i=0;i<6;i++){
        cin >> result;
        if (result=='W'){
            count++;
        }
    }
    if (count>4){
        cout << 1;
    }
    else if (count>2){
        cout << 2;
    }
    else if (count>0){
        cout << 3;
    }
    else {
        cout << -1;
    }
}