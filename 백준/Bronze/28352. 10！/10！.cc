#include <iostream>

using namespace std;

int main() {
    int n,answer=6;
    cin >> n;
    for (int i=11;i<=n;i++){
        answer*=i;
    }
    cout << answer;
}