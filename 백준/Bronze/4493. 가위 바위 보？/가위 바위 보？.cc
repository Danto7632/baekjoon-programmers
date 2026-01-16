#include <iostream>

using namespace std;

int main() {
    int t,n,p1,p2;
    char a;
    cin >> t;
    for (int i=0;i<t;i++){
        p1=0;
        p2=0;
        cin >> n;
        for (int j=0;j<n;j++){
            cin >> a;
            if (a=='R'){
                cin >> a;
                if (a=='S'){
                    p1++;
                }
                else if (a=='P'){
                    p2++;
                }
            }
            else if (a=='P'){
                cin >> a;
                if (a=='R'){
                    p1++;
                }
                else if (a=='S'){
                    p2++;
                }
            }
            else if (a=='S'){
                cin >> a;
                if (a=='P'){
                    p1++;
                }
                else if (a=='R'){
                    p2++;
                }
            }
        }
        cout << (p1==p2?"TIE":p1>p2?"Player 1":"Player 2") << "\n";
    }
}