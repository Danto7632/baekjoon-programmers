#include <iostream>

using namespace std;

int main() {
    int n,x=0,y=0;
    char a;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a=='D'){
            x++;
        }
        else {
            y++;
        }
        if (x+2==y||y+2==x){
            break;
        }
    }
    cout << x << ":" << y;
}