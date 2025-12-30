#include <iostream>

using namespace std;

int main() {
    int n;
    string str1,str2;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str1 >> str2;
        cout << "Case " << i+1 << ": " << str2 << ", " << str1 << "\n";
    }
}