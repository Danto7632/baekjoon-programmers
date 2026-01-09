#include <iostream>

using namespace std;

int main() {
    int n,a,b=1,sum=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a==1){
            sum+=b++;
        }
        else {
            b=1;
        }
    }
    cout << sum;
}