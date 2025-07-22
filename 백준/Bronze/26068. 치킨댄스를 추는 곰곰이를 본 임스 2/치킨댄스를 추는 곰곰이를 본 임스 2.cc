#include <iostream>

using namespace std;

int main() {
    char a;
    int n, num, count=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        cin >> a;
        cin >> num;
        if (num<=90){
            count++;
        }
    }
    cout << count;
}