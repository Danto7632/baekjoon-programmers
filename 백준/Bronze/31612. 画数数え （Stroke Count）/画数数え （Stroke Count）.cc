#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    char c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> c;
        if (c=='j'||c=='i'){
            count+=2;
        }
        else {
            count++;
        }
    }
    cout << count;
}