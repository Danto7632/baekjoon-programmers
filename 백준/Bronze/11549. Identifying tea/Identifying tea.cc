#include <iostream>

using namespace std;

int main() {
    int n, answer, count=0;
    cin >> n;
    for (int i=0;i<5;i++){
        cin >> answer;
        if (n==answer){
            count++;
        }
    }
    cout << count;
}