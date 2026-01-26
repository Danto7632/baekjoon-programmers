#include <iostream>

using namespace std;

int main() {
    int Lion=0,Tiger=0;
    string a;
    for (int i=0;i<9;i++){
        cin >> a;
        if (a=="Lion"){
            Lion++;
        }
        else {
            Tiger++;
        }
    }
    cout << (Lion>Tiger?"Lion":"Tiger");
}