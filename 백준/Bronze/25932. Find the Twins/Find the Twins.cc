#include <iostream>

using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++){
        b=0,c=0;
        for (int j=0;j<10;j++){
            cin >> a;
            cout << a << " ";
            if (a==17){
                b=17;
            }
            if (a==18){
                c=18;
            }
        }
        cout << "\n" << (b+c==0?"none":b+c==35?"both":b+c==18?"mack":"zack") << "\n\n";
    }
}