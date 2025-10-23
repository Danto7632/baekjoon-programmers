#include <iostream>

using namespace std;

int main() {
    int n,b,c,count;
    char a;
    string str;
    cin >> str;
    cin >> n;
    for (int i=0;i<n;i++){
        count=0;
        cin >> a >> b >> c;
        for (int j=b;j<=c;j++){
            if (str[j]==a){
                count++;
            }
        }
        cout << count << "\n";
    }
}