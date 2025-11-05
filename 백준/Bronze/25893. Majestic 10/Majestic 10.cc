#include <iostream>

using namespace std;

int main() {
    int n,a,b,c,count;
    cin >> n;
    for (int i=0;i<n;i++){
        count=0;
        cin >> a >> b >> c;
        cout << a << " " << b << " " << c << "\n";
        a>=10?count++:0;
        b>=10?count++:0;
        c>=10?count++:0;
        if (count==0){
            cout << "zilch\n\n";
        }
        else if (count==1){
            cout << "double\n\n";
        }
        else if (count==2){
            cout << "double-double\n\n";
        }
        else {
            cout << "triple-double\n\n";
        }
        
    }
}