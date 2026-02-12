#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        cout << (str[(str.length()-1)/2]==str[(str.length()-1)/2+1]?"Do-it\n":"Do-it-Not\n");
    }
}