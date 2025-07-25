#include <iostream>

using namespace std;

int main() {
    int n,mul,a,b,c,min=2001;
    cin >> n >> mul;

    for (int i=0;i<n;i++){
        cin >> a;
        if (i!=0){
            min=min<a+b?min:a+b;
        }
        b=a;
    }
    cout << (min*mul);
}