#include <iostream>

using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c;
        cout << (b<c?(c-b)*(a==1?1:a==2?3:5):0) << "\n";
    }
}